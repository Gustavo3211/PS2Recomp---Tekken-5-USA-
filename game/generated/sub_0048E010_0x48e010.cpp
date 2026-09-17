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

// Function: sub_0048E010
// Address: 0x48e010 - 0x48e068
void sub_0048E010_0x48e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E010_0x48e010");
#endif

    switch (ctx->pc) {
        case 0x48e038u: goto label_48e038;
        case 0x48e044u: goto label_48e044;
        default: break;
    }

    ctx->pc = 0x48e010u;

    // 0x48e010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e014: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x48e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x48e018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48e01c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48e01cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48e020: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48e020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48e024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48e028: 0x26112380  addiu       $s1, $s0, 0x2380
    ctx->pc = 0x48e028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9088));
    // 0x48e02c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48e030: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48E030u;
    SET_GPR_U32(ctx, 31, 0x48E038u);
    ctx->pc = 0x48E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E030u;
    // 0x48e034: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48E030u, 0x48E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E038u;
label_48e038:
    // 0x48e038: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x48e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x48e03c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48E03Cu;
    SET_GPR_U32(ctx, 31, 0x48E044u);
    ctx->pc = 0x48E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E03Cu;
    // 0x48e040: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48E03Cu, 0x48E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E044u;
label_48e044:
    // 0x48e044: 0xa60223a2  sh          $v0, 0x23A2($s0)
    ctx->pc = 0x48e044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9122), (uint16_t)GPR_U32(ctx, 2));
    // 0x48e048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48e048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48e04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e054: 0x3e00008  jr          $ra
    ctx->pc = 0x48E054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E054u;
        // 0x48e058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E05Cu;
    // 0x48e05c: 0x0  nop
    ctx->pc = 0x48e05cu;
    // NOP
    // 0x48e060: 0x3e00008  jr          $ra
    ctx->pc = 0x48E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E068u;
}
