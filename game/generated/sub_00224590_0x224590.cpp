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

// Function: sub_00224590
// Address: 0x224590 - 0x224638
void sub_00224590_0x224590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224590_0x224590");
#endif

    switch (ctx->pc) {
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        default: break;
    }

    ctx->pc = 0x224590u;

label_224590:
    // 0x224590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224594:
    // 0x224594: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x224594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_224598:
    // 0x224598: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x224598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22459c:
    // 0x22459c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x22459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_2245a0:
    // 0x2245a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2245a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2245a4:
    // 0x2245a4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2245a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_2245a8:
    // 0x2245a8: 0xc08ae16  jal         func_22B858
label_2245ac:
    if (ctx->pc == 0x2245ACu) {
        ctx->pc = 0x2245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A8u;
        // 0x2245ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245B0u;
        goto label_2245b0;
    }
    ctx->pc = 0x2245A8u;
    SET_GPR_U32(ctx, 31, 0x2245B0u);
    ctx->pc = 0x2245ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245A8u;
    // 0x2245ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B858u, 0x2245A8u, 0x2245B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245B0u;
label_2245b0:
    // 0x2245b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2245b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2245b4:
    // 0x2245b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2245b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2245b8:
    // 0x2245b8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2245bc:
    // 0x2245bc: 0xac4207f8  sw          $v0, 0x7F8($v0)
    ctx->pc = 0x2245bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2040), GPR_U32(ctx, 2));
label_2245c0:
    // 0x2245c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2245c4:
    if (ctx->pc == 0x2245C4u) {
        ctx->pc = 0x2245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C0u;
        // 0x2245c4: 0xac400800  sw          $zero, 0x800($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245C8u;
        goto label_2245c8;
    }
    ctx->pc = 0x2245C0u;
    {
        const bool branch_taken_0x2245c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C0u;
        // 0x2245c4: 0xac400800  sw          $zero, 0x800($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245c0) {
            ctx->pc = 0x2245D8u;
            goto label_2245d8;
        }
    }
    ctx->pc = 0x2245C8u;
label_2245c8:
    // 0x2245c8: 0xc08b8a6  jal         func_22E298
label_2245cc:
    if (ctx->pc == 0x2245CCu) {
        ctx->pc = 0x2245D0u;
        goto label_2245d0;
    }
    ctx->pc = 0x2245C8u;
    SET_GPR_U32(ctx, 31, 0x2245D0u);
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x2245C8u, 0x2245D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245D0u;
label_2245d0:
    // 0x2245d0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2245d4:
    if (ctx->pc == 0x2245D4u) {
        ctx->pc = 0x2245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245D0u;
        // 0x2245d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245D8u;
        goto label_2245d8;
    }
    ctx->pc = 0x2245D0u;
    {
        const bool branch_taken_0x2245d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245D0u;
        // 0x2245d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245d0) {
            ctx->pc = 0x224620u;
            goto label_224620;
        }
    }
    ctx->pc = 0x2245D8u;
label_2245d8:
    // 0x2245d8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2245d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2245dc:
    // 0x2245dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2245dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2245e0:
    // 0x2245e0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2245e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2245e4:
    // 0x2245e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2245e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2245e8:
    // 0x2245e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2245e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2245ec:
    // 0x2245ec: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2245ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2245f0:
    // 0x2245f0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2245f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2245f4:
    // 0x2245f4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2245f8:
    // 0x2245f8: 0x8cc67080  lw          $a2, 0x7080($a2)
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28800)));
label_2245fc:
    // 0x2245fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2245fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_224600:
    // 0x224600: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x224600u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_224604:
    // 0x224604: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x224604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_224608:
    // 0x224608: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x224608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_22460c:
    // 0x22460c: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x22460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
label_224610:
    // 0x224610: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x224610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_224614:
    // 0x224614: 0xc0f809  jalr        $a2
label_224618:
    if (ctx->pc == 0x224618u) {
        ctx->pc = 0x224618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224614u;
        // 0x224618: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22461Cu;
        goto label_22461c;
    }
    ctx->pc = 0x224614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x22461Cu);
        ctx->pc = 0x224618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224614u;
        // 0x224618: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224614u, 0x22461Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22461Cu;
label_22461c:
    // 0x22461c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x22461cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_224620:
    // 0x224620: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x224620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_224624:
    // 0x224624: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x224624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_224628:
    // 0x224628: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x224628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_22462c:
    // 0x22462c: 0x3e00008  jr          $ra
label_224630:
    if (ctx->pc == 0x224630u) {
        ctx->pc = 0x224630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22462Cu;
        // 0x224630: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224634u;
        goto label_224634;
    }
    ctx->pc = 0x22462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22462Cu;
        // 0x224630: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224634u;
label_224634:
    // 0x224634: 0x0  nop
    ctx->pc = 0x224634u;
    // NOP
    ctx->pc = 0x224638u;
}
