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

// Function: sub_00335870
// Address: 0x335870 - 0x3358e0
void sub_00335870_0x335870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335870_0x335870");
#endif

    switch (ctx->pc) {
        case 0x335870u: goto label_335870;
        case 0x335874u: goto label_335874;
        case 0x335878u: goto label_335878;
        case 0x33587cu: goto label_33587c;
        case 0x335880u: goto label_335880;
        case 0x335884u: goto label_335884;
        case 0x335888u: goto label_335888;
        case 0x33588cu: goto label_33588c;
        case 0x335890u: goto label_335890;
        case 0x335894u: goto label_335894;
        case 0x335898u: goto label_335898;
        case 0x33589cu: goto label_33589c;
        case 0x3358a0u: goto label_3358a0;
        case 0x3358a4u: goto label_3358a4;
        case 0x3358a8u: goto label_3358a8;
        case 0x3358acu: goto label_3358ac;
        case 0x3358b0u: goto label_3358b0;
        case 0x3358b4u: goto label_3358b4;
        case 0x3358b8u: goto label_3358b8;
        case 0x3358bcu: goto label_3358bc;
        case 0x3358c0u: goto label_3358c0;
        case 0x3358c4u: goto label_3358c4;
        case 0x3358c8u: goto label_3358c8;
        case 0x3358ccu: goto label_3358cc;
        case 0x3358d0u: goto label_3358d0;
        case 0x3358d4u: goto label_3358d4;
        case 0x3358d8u: goto label_3358d8;
        case 0x3358dcu: goto label_3358dc;
        default: break;
    }

    ctx->pc = 0x335870u;

label_335870:
    // 0x335870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335874:
    // 0x335874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335878:
    // 0x335878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33587c:
    // 0x33587c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_335880:
    // 0x335880: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x335880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_335884:
    // 0x335884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_335888:
    // 0x335888: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x335888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33588c:
    // 0x33588c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335890:
    // 0x335890: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_335894:
    // 0x335894: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x335894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_335898:
    // 0x335898: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x335898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33589c:
    // 0x33589c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3358a0:
    // 0x3358a0: 0x60f809  jalr        $v1
label_3358a4:
    if (ctx->pc == 0x3358A4u) {
        ctx->pc = 0x3358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358A0u;
        // 0x3358a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3358A8u;
        goto label_3358a8;
    }
    ctx->pc = 0x3358A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3358A8u);
        ctx->pc = 0x3358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358A0u;
        // 0x3358a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358A0u, 0x3358A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3358A8u;
label_3358a8:
    // 0x3358a8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3358a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3358ac:
    // 0x3358ac: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x3358acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3358b0:
    // 0x3358b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3358b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3358b4:
    // 0x3358b4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3358b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3358b8:
    // 0x3358b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3358b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3358bc:
    // 0x3358bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3358bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3358c0:
    // 0x3358c0: 0x60f809  jalr        $v1
label_3358c4:
    if (ctx->pc == 0x3358C4u) {
        ctx->pc = 0x3358C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358C0u;
        // 0x3358c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3358C8u;
        goto label_3358c8;
    }
    ctx->pc = 0x3358C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3358C8u);
        ctx->pc = 0x3358C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358C0u;
        // 0x3358c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358C0u, 0x3358C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3358C8u;
label_3358c8:
    // 0x3358c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3358c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3358cc:
    // 0x3358cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3358ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3358d0:
    // 0x3358d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3358d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3358d4:
    // 0x3358d4: 0x3e00008  jr          $ra
label_3358d8:
    if (ctx->pc == 0x3358D8u) {
        ctx->pc = 0x3358D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358D4u;
        // 0x3358d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3358DCu;
        goto label_3358dc;
    }
    ctx->pc = 0x3358D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3358D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358D4u;
        // 0x3358d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3358DCu;
label_3358dc:
    // 0x3358dc: 0x0  nop
    ctx->pc = 0x3358dcu;
    // NOP
    ctx->pc = 0x3358e0u;
}
