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

// Function: sub_00294FC0
// Address: 0x294fc0 - 0x295048
void sub_00294FC0_0x294fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294FC0_0x294fc0");
#endif

    switch (ctx->pc) {
        case 0x295018u: goto label_295018;
        case 0x295024u: goto label_295024;
        default: break;
    }

    ctx->pc = 0x294fc0u;

label_294fc0:
    // 0x294fc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294fc4: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294fc4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294fc8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x294FC8u;
    {
        const bool branch_taken_0x294fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FC8u;
        // 0x294fcc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fc8) {
            ctx->pc = 0x294FECu;
            goto label_294fec;
        }
    }
    ctx->pc = 0x294FD0u;
    // 0x294fd0: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x294fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x294fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294FD4u;
    {
        const bool branch_taken_0x294fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FD4u;
        // 0x294fd8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fd4) {
            ctx->pc = 0x294FECu;
            goto label_294fec;
        }
    }
    ctx->pc = 0x294FDCu;
    // 0x294fdc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294fe0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294fe8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294fec:
    // 0x294fec: 0x3e00008  jr          $ra
    ctx->pc = 0x294FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294FF4u;
    // 0x294ff4: 0x0  nop
    ctx->pc = 0x294ff4u;
    // NOP
    // 0x294ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295004: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x295004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x295008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29500c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29500cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295014: 0x0  nop
    ctx->pc = 0x295014u;
    // NOP
label_295018:
    // 0x295018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29501c: 0xc0a53f0  jal         func_294FC0
    ctx->pc = 0x29501Cu;
    SET_GPR_U32(ctx, 31, 0x295024u);
    ctx->pc = 0x295020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29501Cu;
    // 0x295020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294FC0u;
    goto label_294fc0;
    ctx->pc = 0x295024u;
label_295024:
    // 0x295024: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x295024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x295028: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x295028u;
    {
        const bool branch_taken_0x295028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295028u;
        // 0x29502c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295028) {
            ctx->pc = 0x295018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295018;
        }
    }
    ctx->pc = 0x295030u;
    // 0x295030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x295034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x295038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29503c: 0x3e00008  jr          $ra
    ctx->pc = 0x29503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29503Cu;
        // 0x295040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295044u;
    // 0x295044: 0x0  nop
    ctx->pc = 0x295044u;
    // NOP
    ctx->pc = 0x295048u;
}
