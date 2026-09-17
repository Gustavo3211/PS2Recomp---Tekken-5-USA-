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

// Function: sub_002DF550
// Address: 0x2df550 - 0x2df608
void sub_002DF550_0x2df550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF550_0x2df550");
#endif

    switch (ctx->pc) {
        case 0x2df550u: goto label_2df550;
        case 0x2df554u: goto label_2df554;
        case 0x2df558u: goto label_2df558;
        case 0x2df55cu: goto label_2df55c;
        case 0x2df560u: goto label_2df560;
        case 0x2df564u: goto label_2df564;
        case 0x2df568u: goto label_2df568;
        case 0x2df56cu: goto label_2df56c;
        case 0x2df570u: goto label_2df570;
        case 0x2df574u: goto label_2df574;
        case 0x2df578u: goto label_2df578;
        case 0x2df57cu: goto label_2df57c;
        case 0x2df580u: goto label_2df580;
        case 0x2df584u: goto label_2df584;
        case 0x2df588u: goto label_2df588;
        case 0x2df58cu: goto label_2df58c;
        case 0x2df590u: goto label_2df590;
        case 0x2df594u: goto label_2df594;
        case 0x2df598u: goto label_2df598;
        case 0x2df59cu: goto label_2df59c;
        case 0x2df5a0u: goto label_2df5a0;
        case 0x2df5a4u: goto label_2df5a4;
        case 0x2df5a8u: goto label_2df5a8;
        case 0x2df5acu: goto label_2df5ac;
        case 0x2df5b0u: goto label_2df5b0;
        case 0x2df5b4u: goto label_2df5b4;
        case 0x2df5b8u: goto label_2df5b8;
        case 0x2df5bcu: goto label_2df5bc;
        case 0x2df5c0u: goto label_2df5c0;
        case 0x2df5c4u: goto label_2df5c4;
        case 0x2df5c8u: goto label_2df5c8;
        case 0x2df5ccu: goto label_2df5cc;
        case 0x2df5d0u: goto label_2df5d0;
        case 0x2df5d4u: goto label_2df5d4;
        case 0x2df5d8u: goto label_2df5d8;
        case 0x2df5dcu: goto label_2df5dc;
        case 0x2df5e0u: goto label_2df5e0;
        case 0x2df5e4u: goto label_2df5e4;
        case 0x2df5e8u: goto label_2df5e8;
        case 0x2df5ecu: goto label_2df5ec;
        case 0x2df5f0u: goto label_2df5f0;
        case 0x2df5f4u: goto label_2df5f4;
        case 0x2df5f8u: goto label_2df5f8;
        case 0x2df5fcu: goto label_2df5fc;
        case 0x2df600u: goto label_2df600;
        case 0x2df604u: goto label_2df604;
        default: break;
    }

    ctx->pc = 0x2df550u;

label_2df550:
    // 0x2df550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2df554:
    // 0x2df554: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2df554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2df558:
    // 0x2df558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2df55c:
    // 0x2df55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df560:
    // 0x2df560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2df564:
    // 0x2df564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2df564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2df568:
    // 0x2df568: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
label_2df56c:
    if (ctx->pc == 0x2DF56Cu) {
        ctx->pc = 0x2DF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF568u;
        // 0x2df56c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF570u;
        goto label_2df570;
    }
    ctx->pc = 0x2DF568u;
    {
        const bool branch_taken_0x2df568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF568u;
        // 0x2df56c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df568) {
            ctx->pc = 0x2DF5ECu;
            goto label_2df5ec;
        }
    }
    ctx->pc = 0x2DF570u;
label_2df570:
    // 0x2df570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df574:
    // 0x2df574: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_2df578:
    if (ctx->pc == 0x2DF578u) {
        ctx->pc = 0x2DF57Cu;
        goto label_2df57c;
    }
    ctx->pc = 0x2DF574u;
    {
        const bool branch_taken_0x2df574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2df574) {
            ctx->pc = 0x2DF588u;
            goto label_2df588;
        }
    }
    ctx->pc = 0x2DF57Cu;
label_2df57c:
    // 0x2df57c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2df57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2df580:
    // 0x2df580: 0xc0b7afc  jal         func_2DEBF0
label_2df584:
    if (ctx->pc == 0x2DF584u) {
        ctx->pc = 0x2DF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF580u;
        // 0x2df584: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF588u;
        goto label_2df588;
    }
    ctx->pc = 0x2DF580u;
    SET_GPR_U32(ctx, 31, 0x2DF588u);
    ctx->pc = 0x2DF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF580u;
    // 0x2df584: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEBF0u, 0x2DF580u, 0x2DF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF588u;
label_2df588:
    // 0x2df588: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
label_2df58c:
    if (ctx->pc == 0x2DF58Cu) {
        ctx->pc = 0x2DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF588u;
        // 0x2df58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF590u;
        goto label_2df590;
    }
    ctx->pc = 0x2DF588u;
    {
        const bool branch_taken_0x2df588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF588u;
        // 0x2df58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df588) {
            ctx->pc = 0x2DF5F0u;
            goto label_2df5f0;
        }
    }
    ctx->pc = 0x2DF590u;
label_2df590:
    // 0x2df590: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x2df590u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
label_2df594:
    // 0x2df594: 0x2402ff94  addiu       $v0, $zero, -0x6C
    ctx->pc = 0x2df594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
label_2df598:
    // 0x2df598: 0x264437e0  addiu       $a0, $s2, 0x37E0
    ctx->pc = 0x2df598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14304));
label_2df59c:
    // 0x2df59c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_2df5a0:
    if (ctx->pc == 0x2DF5A0u) {
        ctx->pc = 0x2DF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF59Cu;
        // 0x2df5a0: 0x2482006c  addiu       $v0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5A4u;
        goto label_2df5a4;
    }
    ctx->pc = 0x2DF59Cu;
    {
        const bool branch_taken_0x2df59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF59Cu;
        // 0x2df5a0: 0x2482006c  addiu       $v0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df59c) {
            ctx->pc = 0x2DF5DCu;
            goto label_2df5dc;
        }
    }
    ctx->pc = 0x2DF5A4u;
label_2df5a4:
    // 0x2df5a4: 0x249000cc  addiu       $s0, $a0, 0xCC
    ctx->pc = 0x2df5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
label_2df5a8:
    // 0x2df5a8: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
label_2df5ac:
    if (ctx->pc == 0x2DF5ACu) {
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5A8u;
        // 0x2df5ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5B0u;
        goto label_2df5b0;
    }
    ctx->pc = 0x2DF5A8u;
    {
        const bool branch_taken_0x2df5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5A8u;
        // 0x2df5ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5a8) {
            ctx->pc = 0x2DF5DCu;
            goto label_2df5dc;
        }
    }
    ctx->pc = 0x2DF5B0u;
label_2df5b0:
    // 0x2df5b0: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x2df5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_2df5b4:
    // 0x2df5b4: 0x0  nop
    ctx->pc = 0x2df5b4u;
    // NOP
label_2df5b8:
    // 0x2df5b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2df5bc:
    // 0x2df5bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2df5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2df5c0:
    // 0x2df5c0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2df5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2df5c4:
    // 0x2df5c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2df5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2df5c8:
    // 0x2df5c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2df5cc:
    // 0x2df5cc: 0x60f809  jalr        $v1
label_2df5d0:
    if (ctx->pc == 0x2DF5D0u) {
        ctx->pc = 0x2DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5CCu;
        // 0x2df5d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5D4u;
        goto label_2df5d4;
    }
    ctx->pc = 0x2DF5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DF5D4u);
        ctx->pc = 0x2DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5CCu;
        // 0x2df5d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF5CCu, 0x2DF5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF5D4u;
label_2df5d4:
    // 0x2df5d4: 0x1611fff8  bne         $s0, $s1, . + 4 + (-0x8 << 2)
label_2df5d8:
    if (ctx->pc == 0x2DF5D8u) {
        ctx->pc = 0x2DF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D4u;
        // 0x2df5d8: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5DCu;
        goto label_2df5dc;
    }
    ctx->pc = 0x2DF5D4u;
    {
        const bool branch_taken_0x2df5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D4u;
        // 0x2df5d8: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5d4) {
            ctx->pc = 0x2DF5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df5b8;
        }
    }
    ctx->pc = 0x2DF5DCu;
label_2df5dc:
    // 0x2df5dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2df5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2df5e0:
    // 0x2df5e0: 0x264337e0  addiu       $v1, $s2, 0x37E0
    ctx->pc = 0x2df5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14304));
label_2df5e4:
    // 0x2df5e4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2df5e8:
    // 0x2df5e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2df5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2df5ec:
    // 0x2df5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df5f0:
    // 0x2df5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2df5f4:
    // 0x2df5f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2df5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2df5f8:
    // 0x2df5f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2df5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2df5fc:
    // 0x2df5fc: 0x3e00008  jr          $ra
label_2df600:
    if (ctx->pc == 0x2DF600u) {
        ctx->pc = 0x2DF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5FCu;
        // 0x2df600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF604u;
        goto label_2df604;
    }
    ctx->pc = 0x2DF5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5FCu;
        // 0x2df600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF604u;
label_2df604:
    // 0x2df604: 0x0  nop
    ctx->pc = 0x2df604u;
    // NOP
    ctx->pc = 0x2df608u;
}
