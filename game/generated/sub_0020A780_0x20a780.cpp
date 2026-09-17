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

// Function: sub_0020A780
// Address: 0x20a780 - 0x20a828
void sub_0020A780_0x20a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A780_0x20a780");
#endif

    switch (ctx->pc) {
        case 0x20a7a8u: goto label_20a7a8;
        case 0x20a7b0u: goto label_20a7b0;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7fcu: goto label_20a7fc;
        case 0x20a804u: goto label_20a804;
        case 0x20a80cu: goto label_20a80c;
        default: break;
    }

    ctx->pc = 0x20a780u;

    // 0x20a780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a78c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a794: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a798: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x20a798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20a79c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20a7a0: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x20A7A0u;
    SET_GPR_U32(ctx, 31, 0x20A7A8u);
    ctx->pc = 0x20A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7A0u;
    // 0x20a7a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x20A7A0u, 0x20A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7A8u;
label_20a7a8:
    // 0x20a7a8: 0xc082162  jal         func_208588
    ctx->pc = 0x20A7A8u;
    SET_GPR_U32(ctx, 31, 0x20A7B0u);
    ctx->pc = 0x20A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7A8u;
    // 0x20a7ac: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A7A8u, 0x20A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7B0u;
label_20a7b0:
    // 0x20a7b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7b4: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20a7b8: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A7B8u;
    {
        const bool branch_taken_0x20a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x20A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7B8u;
        // 0x20a7bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7b8) {
            ctx->pc = 0x20A7D0u;
            goto label_20a7d0;
        }
    }
    ctx->pc = 0x20A7C0u;
    // 0x20a7c0: 0xc086494  jal         func_219250
    ctx->pc = 0x20A7C0u;
    SET_GPR_U32(ctx, 31, 0x20A7C8u);
    ctx->pc = 0x20A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7C0u;
    // 0x20a7c4: 0x8f85973c  lw          $a1, -0x68C4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219250u, 0x20A7C0u, 0x20A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7C8u;
label_20a7c8:
    // 0x20a7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a7cc: 0xa622003e  sh          $v0, 0x3E($s1)
    ctx->pc = 0x20a7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
label_20a7d0:
    // 0x20a7d0: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20a7d4: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A7D4u;
    {
        const bool branch_taken_0x20a7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x20A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7D4u;
        // 0x20a7d8: 0x8f85973c  lw          $a1, -0x68C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7d4) {
            ctx->pc = 0x20A7ECu;
            goto label_20a7ec;
        }
    }
    ctx->pc = 0x20A7DCu;
    // 0x20a7dc: 0xc086494  jal         func_219250
    ctx->pc = 0x20A7DCu;
    SET_GPR_U32(ctx, 31, 0x20A7E4u);
    ctx->pc = 0x20A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7DCu;
    // 0x20a7e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219250u, 0x20A7DCu, 0x20A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7E4u;
label_20a7e4:
    // 0x20a7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a7e8: 0xa602003e  sh          $v0, 0x3E($s0)
    ctx->pc = 0x20a7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
label_20a7ec:
    // 0x20a7ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A7ECu;
    {
        const bool branch_taken_0x20a7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7ECu;
        // 0x20a7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7ec) {
            ctx->pc = 0x20A7FCu;
            goto label_20a7fc;
        }
    }
    ctx->pc = 0x20A7F4u;
    // 0x20a7f4: 0xc089338  jal         func_224CE0
    ctx->pc = 0x20A7F4u;
    SET_GPR_U32(ctx, 31, 0x20A7FCu);
    ctx->pc = 0x20A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7F4u;
    // 0x20a7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224CE0u, 0x20A7F4u, 0x20A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7FCu;
label_20a7fc:
    // 0x20a7fc: 0xc0af524  jal         func_2BD490
    ctx->pc = 0x20A7FCu;
    SET_GPR_U32(ctx, 31, 0x20A804u);
    ctx->pc = 0x2BD490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD490u, 0x20A7FCu, 0x20A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A804u;
label_20a804:
    // 0x20a804: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x20A804u;
    SET_GPR_U32(ctx, 31, 0x20A80Cu);
    ctx->pc = 0x20A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A804u;
    // 0x20a808: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x20A804u, 0x20A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A80Cu;
label_20a80c:
    // 0x20a80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a814: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a818: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a81c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A81Cu;
        // 0x20a820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A824u;
    // 0x20a824: 0x0  nop
    ctx->pc = 0x20a824u;
    // NOP
    ctx->pc = 0x20a828u;
}
