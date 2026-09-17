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

// Function: sub_002157F8
// Address: 0x2157f8 - 0x215890
void sub_002157F8_0x2157f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002157F8_0x2157f8");
#endif

    switch (ctx->pc) {
        case 0x215808u: goto label_215808;
        case 0x215814u: goto label_215814;
        case 0x21581cu: goto label_21581c;
        case 0x215824u: goto label_215824;
        case 0x21582cu: goto label_21582c;
        case 0x215840u: goto label_215840;
        default: break;
    }

    ctx->pc = 0x2157f8u;

    // 0x2157f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2157f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2157fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2157fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215800: 0xc0821ce  jal         func_208738
    ctx->pc = 0x215800u;
    SET_GPR_U32(ctx, 31, 0x215808u);
    ctx->pc = 0x215804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215800u;
    // 0x215804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x215800u, 0x215808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215808u;
label_215808:
    // 0x215808: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x215808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21580c: 0xc0a5e92  jal         func_297A48
    ctx->pc = 0x21580Cu;
    SET_GPR_U32(ctx, 31, 0x215814u);
    ctx->pc = 0x215810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21580Cu;
    // 0x215810: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A48u, 0x21580Cu, 0x215814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215814u;
label_215814:
    // 0x215814: 0xc09471c  jal         func_251C70
    ctx->pc = 0x215814u;
    SET_GPR_U32(ctx, 31, 0x21581Cu);
    ctx->pc = 0x251C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C70u, 0x215814u, 0x21581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21581Cu;
label_21581c:
    // 0x21581c: 0xc093720  jal         func_24DC80
    ctx->pc = 0x21581Cu;
    SET_GPR_U32(ctx, 31, 0x215824u);
    ctx->pc = 0x24DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC80u, 0x21581Cu, 0x215824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215824u;
label_215824:
    // 0x215824: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x215824u;
    SET_GPR_U32(ctx, 31, 0x21582Cu);
    ctx->pc = 0x21BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE38u, 0x215824u, 0x21582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21582Cu;
label_21582c:
    // 0x21582c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x215830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215834: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x215838: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x215838u;
    SET_GPR_U32(ctx, 31, 0x215840u);
    ctx->pc = 0x21583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215838u;
    // 0x21583c: 0xaf80c91c  sw          $zero, -0x36E4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x215838u, 0x215840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215840u;
label_215840:
    // 0x215840: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x215844: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215848: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215848u;
    {
        const bool branch_taken_0x215848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215848u;
        // 0x21584c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215848) {
            ctx->pc = 0x215864u;
            goto label_215864;
        }
    }
    ctx->pc = 0x215850u;
    // 0x215850: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x215854: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x215854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215858: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21585c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21585Cu;
    {
        const bool branch_taken_0x21585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x215860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21585Cu;
        // 0x215860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21585c) {
            ctx->pc = 0x215874u;
            goto label_215874;
        }
    }
    ctx->pc = 0x215864u;
label_215864:
    // 0x215864: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x215864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x215868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21586c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21586cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x215870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_215874:
    // 0x215874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215878: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21587c: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x21587cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
    // 0x215880: 0xac64886c  sw          $a0, -0x7794($v1)
    ctx->pc = 0x215880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x215884: 0x3e00008  jr          $ra
    ctx->pc = 0x215884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215884u;
        // 0x215888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21588Cu;
    // 0x21588c: 0x0  nop
    ctx->pc = 0x21588cu;
    // NOP
    ctx->pc = 0x215890u;
}
