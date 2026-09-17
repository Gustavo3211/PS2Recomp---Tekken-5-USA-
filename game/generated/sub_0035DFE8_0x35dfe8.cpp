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

// Function: sub_0035DFE8
// Address: 0x35dfe8 - 0x35e060
void sub_0035DFE8_0x35dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DFE8_0x35dfe8");
#endif

    switch (ctx->pc) {
        case 0x35e008u: goto label_35e008;
        case 0x35e010u: goto label_35e010;
        case 0x35e018u: goto label_35e018;
        case 0x35e020u: goto label_35e020;
        default: break;
    }

    ctx->pc = 0x35dfe8u;

    // 0x35dfe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dff4: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x35dff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x35dff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35dffc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e000: 0xc0d7818  jal         func_35E060
    ctx->pc = 0x35E000u;
    SET_GPR_U32(ctx, 31, 0x35E008u);
    ctx->pc = 0x35E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E000u;
    // 0x35e004: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E060u, 0x35E000u, 0x35E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E008u;
label_35e008:
    // 0x35e008: 0xc0d7b34  jal         func_35ECD0
    ctx->pc = 0x35E008u;
    SET_GPR_U32(ctx, 31, 0x35E010u);
    ctx->pc = 0x35ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ECD0u, 0x35E008u, 0x35E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E010u;
label_35e010:
    // 0x35e010: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35e010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35e014: 0x24702fe8  addiu       $s0, $v1, 0x2FE8
    ctx->pc = 0x35e014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12264));
label_35e018:
    // 0x35e018: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35E018u;
    SET_GPR_U32(ctx, 31, 0x35E020u);
    ctx->pc = 0x35E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E018u;
    // 0x35e01c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35E018u, 0x35E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E020u;
label_35e020:
    // 0x35e020: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35e020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35e024: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35e024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35e028: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35e028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35e02c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x35e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x35e030: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x35e030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x35e034: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35E034u;
    {
        const bool branch_taken_0x35e034 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x35E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E034u;
        // 0x35e038: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e034) {
            ctx->pc = 0x35E018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e018;
        }
    }
    ctx->pc = 0x35E03Cu;
    // 0x35e03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e04c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e050: 0xaf82c7e4  sw          $v0, -0x381C($gp)
    ctx->pc = 0x35e050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 2));
    // 0x35e054: 0x3e00008  jr          $ra
    ctx->pc = 0x35E054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E054u;
        // 0x35e058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E05Cu;
    // 0x35e05c: 0x0  nop
    ctx->pc = 0x35e05cu;
    // NOP
    ctx->pc = 0x35e060u;
}
