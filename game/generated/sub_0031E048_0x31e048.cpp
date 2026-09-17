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

// Function: sub_0031E048
// Address: 0x31e048 - 0x31e0c8
void sub_0031E048_0x31e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E048_0x31e048");
#endif

    switch (ctx->pc) {
        case 0x31e048u: goto label_31e048;
        case 0x31e04cu: goto label_31e04c;
        case 0x31e050u: goto label_31e050;
        case 0x31e054u: goto label_31e054;
        case 0x31e058u: goto label_31e058;
        case 0x31e05cu: goto label_31e05c;
        case 0x31e060u: goto label_31e060;
        case 0x31e064u: goto label_31e064;
        case 0x31e068u: goto label_31e068;
        case 0x31e06cu: goto label_31e06c;
        case 0x31e070u: goto label_31e070;
        case 0x31e074u: goto label_31e074;
        case 0x31e078u: goto label_31e078;
        case 0x31e07cu: goto label_31e07c;
        case 0x31e080u: goto label_31e080;
        case 0x31e084u: goto label_31e084;
        case 0x31e088u: goto label_31e088;
        case 0x31e08cu: goto label_31e08c;
        case 0x31e090u: goto label_31e090;
        case 0x31e094u: goto label_31e094;
        case 0x31e098u: goto label_31e098;
        case 0x31e09cu: goto label_31e09c;
        case 0x31e0a0u: goto label_31e0a0;
        case 0x31e0a4u: goto label_31e0a4;
        case 0x31e0a8u: goto label_31e0a8;
        case 0x31e0acu: goto label_31e0ac;
        case 0x31e0b0u: goto label_31e0b0;
        case 0x31e0b4u: goto label_31e0b4;
        case 0x31e0b8u: goto label_31e0b8;
        case 0x31e0bcu: goto label_31e0bc;
        case 0x31e0c0u: goto label_31e0c0;
        case 0x31e0c4u: goto label_31e0c4;
        default: break;
    }

    ctx->pc = 0x31e048u;

label_31e048:
    // 0x31e048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31e04c:
    // 0x31e04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e050:
    // 0x31e050: 0x8f90ccdc  lw          $s0, -0x3324($gp)
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954204)));
label_31e054:
    // 0x31e054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e058:
    // 0x31e058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e05c:
    // 0x31e05c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e060:
    // 0x31e060: 0xc0c77e8  jal         func_31DFA0
label_31e064:
    if (ctx->pc == 0x31E064u) {
        ctx->pc = 0x31E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E060u;
        // 0x31e064: 0xa5800b  movn        $s0, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E068u;
        goto label_31e068;
    }
    ctx->pc = 0x31E060u;
    SET_GPR_U32(ctx, 31, 0x31E068u);
    ctx->pc = 0x31E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E060u;
    // 0x31e064: 0xa5800b  movn        $s0, $a1, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x31E060u, 0x31E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E068u;
label_31e068:
    // 0x31e068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e06c:
    // 0x31e06c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e070:
    // 0x31e070: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x31e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_31e074:
    // 0x31e074: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e078:
    // 0x31e078: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e07c:
    // 0x31e07c: 0x40f809  jalr        $v0
label_31e080:
    if (ctx->pc == 0x31E080u) {
        ctx->pc = 0x31E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E07Cu;
        // 0x31e080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E084u;
        goto label_31e084;
    }
    ctx->pc = 0x31E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E084u);
        ctx->pc = 0x31E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E07Cu;
        // 0x31e080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E07Cu, 0x31E084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E084u;
label_31e084:
    // 0x31e084: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x31e084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_31e088:
    // 0x31e088: 0xc0c77e8  jal         func_31DFA0
label_31e08c:
    if (ctx->pc == 0x31E08Cu) {
        ctx->pc = 0x31E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E088u;
        // 0x31e08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E090u;
        goto label_31e090;
    }
    ctx->pc = 0x31E088u;
    SET_GPR_U32(ctx, 31, 0x31E090u);
    ctx->pc = 0x31E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E088u;
    // 0x31e08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x31E088u, 0x31E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E090u;
label_31e090:
    // 0x31e090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e094:
    // 0x31e094: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x31e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e098:
    // 0x31e098: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x31e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_31e09c:
    // 0x31e09c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e0a0:
    // 0x31e0a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e0a4:
    // 0x31e0a4: 0x40f809  jalr        $v0
label_31e0a8:
    if (ctx->pc == 0x31E0A8u) {
        ctx->pc = 0x31E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A4u;
        // 0x31e0a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0ACu;
        goto label_31e0ac;
    }
    ctx->pc = 0x31E0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E0ACu);
        ctx->pc = 0x31E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A4u;
        // 0x31e0a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0A4u, 0x31E0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E0ACu;
label_31e0ac:
    // 0x31e0ac: 0xc0c7896  jal         func_31E258
label_31e0b0:
    if (ctx->pc == 0x31E0B0u) {
        ctx->pc = 0x31E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0ACu;
        // 0x31e0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0B4u;
        goto label_31e0b4;
    }
    ctx->pc = 0x31E0ACu;
    SET_GPR_U32(ctx, 31, 0x31E0B4u);
    ctx->pc = 0x31E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E0ACu;
    // 0x31e0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E258u, 0x31E0ACu, 0x31E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0B4u;
label_31e0b4:
    // 0x31e0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e0b8:
    // 0x31e0b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e0bc:
    // 0x31e0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e0c0:
    // 0x31e0c0: 0x3e00008  jr          $ra
label_31e0c4:
    if (ctx->pc == 0x31E0C4u) {
        ctx->pc = 0x31E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0C0u;
        // 0x31e0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0C8u;
        goto label_fallthrough_0x31e0c0;
    }
    ctx->pc = 0x31E0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0C0u;
        // 0x31e0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e0c0:
    ctx->pc = 0x31E0C8u;
}
