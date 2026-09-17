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

// Function: sub_00304860
// Address: 0x304860 - 0x3048a8
void sub_00304860_0x304860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304860_0x304860");
#endif

    switch (ctx->pc) {
        case 0x30487cu: goto label_30487c;
        case 0x304890u: goto label_304890;
        default: break;
    }

    ctx->pc = 0x304860u;

    // 0x304860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30486c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304874: 0xc0c1126  jal         func_304498
    ctx->pc = 0x304874u;
    SET_GPR_U32(ctx, 31, 0x30487Cu);
    ctx->pc = 0x304878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304874u;
    // 0x304878: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304498u, 0x304874u, 0x30487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30487Cu;
label_30487c:
    // 0x30487c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x30487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x304880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304884: 0x246311e0  addiu       $v1, $v1, 0x11E0
    ctx->pc = 0x304884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4576));
    // 0x304888: 0xc0bfc84  jal         func_2FF210
    ctx->pc = 0x304888u;
    SET_GPR_U32(ctx, 31, 0x304890u);
    ctx->pc = 0x30488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304888u;
    // 0x30488c: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF210u, 0x304888u, 0x304890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304890u;
label_304890:
    // 0x304890: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x304890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x304894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30489c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30489cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3048a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3048A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3048A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048A0u;
        // 0x3048a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3048A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3048A8u;
}
