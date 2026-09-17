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

// Function: sub_002ED940
// Address: 0x2ed940 - 0x2edce0
void sub_002ED940_0x2ed940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED940_0x2ed940");
#endif

    switch (ctx->pc) {
        case 0x2ed96cu: goto label_2ed96c;
        case 0x2ed9a0u: goto label_2ed9a0;
        case 0x2ed9a8u: goto label_2ed9a8;
        case 0x2ed9b4u: goto label_2ed9b4;
        case 0x2ed9d0u: goto label_2ed9d0;
        case 0x2eda04u: goto label_2eda04;
        case 0x2eda1cu: goto label_2eda1c;
        case 0x2eda38u: goto label_2eda38;
        case 0x2eda70u: goto label_2eda70;
        case 0x2eda84u: goto label_2eda84;
        case 0x2edac4u: goto label_2edac4;
        case 0x2edadcu: goto label_2edadc;
        case 0x2edae4u: goto label_2edae4;
        case 0x2edaf0u: goto label_2edaf0;
        case 0x2edb08u: goto label_2edb08;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb1cu: goto label_2edb1c;
        case 0x2edb40u: goto label_2edb40;
        case 0x2edb74u: goto label_2edb74;
        case 0x2edbbcu: goto label_2edbbc;
        case 0x2edbe8u: goto label_2edbe8;
        case 0x2edbf0u: goto label_2edbf0;
        case 0x2edc00u: goto label_2edc00;
        case 0x2edc40u: goto label_2edc40;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc54u: goto label_2edc54;
        case 0x2edc8cu: goto label_2edc8c;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edcacu: goto label_2edcac;
        case 0x2edcb4u: goto label_2edcb4;
        default: break;
    }

    ctx->pc = 0x2ed940u;

    // 0x2ed940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed944: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ed944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ed948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed950: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ed950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ed954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed958: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ed958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ed95c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ed95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ed960: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ed960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ed964: 0xc0dbdd4  jal         func_36F750
    ctx->pc = 0x2ED964u;
    SET_GPR_U32(ctx, 31, 0x2ED96Cu);
    ctx->pc = 0x2ED968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED964u;
    // 0x2ed968: 0x2444f454  addiu       $a0, $v0, -0xBAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F750u, 0x2ED964u, 0x2ED96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED96Cu;
label_2ed96c:
    // 0x2ed96c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2ed96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2ed970: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ed970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed974: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ed974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ed978: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
    ctx->pc = 0x2ED978u;
    {
        const bool branch_taken_0x2ed978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed978) {
            ctx->pc = 0x2ED97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED978u;
            // 0x2ed97c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2ED980u;
    // 0x2ed980: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed984: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ed984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ed988: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ed988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ed98c: 0x8c630850  lw          $v1, 0x850($v1)
    ctx->pc = 0x2ed98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
    // 0x2ed990: 0x600008  jr          $v1
    ctx->pc = 0x2ED990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ED998u: goto label_2ed998;
            case 0x2EDA14u: goto label_2eda14;
            case 0x2EDB00u: goto label_2edb00;
            case 0x2EDB28u: goto label_2edb28;
            case 0x2EDB30u: goto label_2edb30;
            case 0x2EDC08u: goto label_2edc08;
            case 0x2EDC60u: goto label_2edc60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ED998u;
label_2ed998:
    // 0x2ed998: 0xc0bb408  jal         func_2ED020
    ctx->pc = 0x2ED998u;
    SET_GPR_U32(ctx, 31, 0x2ED9A0u);
    ctx->pc = 0x2ED99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED998u;
    // 0x2ed99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED020u, 0x2ED998u, 0x2ED9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9A0u;
label_2ed9a0:
    // 0x2ed9a0: 0xc0bb420  jal         func_2ED080
    ctx->pc = 0x2ED9A0u;
    SET_GPR_U32(ctx, 31, 0x2ED9A8u);
    ctx->pc = 0x2ED9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9A0u;
    // 0x2ed9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED080u, 0x2ED9A0u, 0x2ED9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9A8u;
label_2ed9a8:
    // 0x2ed9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9ac: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2ED9ACu;
    SET_GPR_U32(ctx, 31, 0x2ED9B4u);
    ctx->pc = 0x2ED9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9ACu;
    // 0x2ed9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2ED9ACu, 0x2ED9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9B4u;
label_2ed9b4:
    // 0x2ed9b4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ed9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ed9b8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ED9B8u;
    {
        const bool branch_taken_0x2ed9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9B8u;
        // 0x2ed9bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9b8) {
            ctx->pc = 0x2EDA0Cu;
            goto label_2eda0c;
        }
    }
    ctx->pc = 0x2ED9C0u;
    // 0x2ed9c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed9c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed9c8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED9C8u;
    SET_GPR_U32(ctx, 31, 0x2ED9D0u);
    ctx->pc = 0x2ED9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9C8u;
    // 0x2ed9cc: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED9C8u, 0x2ED9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9D0u;
label_2ed9d0:
    // 0x2ed9d0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2ed9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2ed9d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ed9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed9d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED9D8u;
    {
        const bool branch_taken_0x2ed9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9d8) {
            ctx->pc = 0x2ED9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED9D8u;
            // 0x2ed9dc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED9F4u;
            goto label_2ed9f4;
        }
    }
    ctx->pc = 0x2ED9E0u;
    // 0x2ed9e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed9e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ed9e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED9E8u;
    {
        const bool branch_taken_0x2ed9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed9e8) {
            ctx->pc = 0x2ED9FCu;
            goto label_2ed9fc;
        }
    }
    ctx->pc = 0x2ED9F0u;
    // 0x2ed9f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ed9f4:
    // 0x2ed9f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ed9fc:
    // 0x2ed9fc: 0xc0a1626  jal         func_285898
    ctx->pc = 0x2ED9FCu;
    SET_GPR_U32(ctx, 31, 0x2EDA04u);
    ctx->pc = 0x285898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285898u, 0x2ED9FCu, 0x2EDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA04u;
label_2eda04:
    // 0x2eda04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDA04u;
    {
        const bool branch_taken_0x2eda04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA04u;
        // 0x2eda08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda04) {
            ctx->pc = 0x2EDA14u;
            goto label_2eda14;
        }
    }
    ctx->pc = 0x2EDA0Cu;
label_2eda0c:
    // 0x2eda0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2eda10: 0xac43c500  sw          $v1, -0x3B00($v0)
    ctx->pc = 0x2eda10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BC500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BC500u, _value); } while (0);
label_2eda14:
    // 0x2eda14: 0xc0bb444  jal         func_2ED110
    ctx->pc = 0x2EDA14u;
    SET_GPR_U32(ctx, 31, 0x2EDA1Cu);
    ctx->pc = 0x2EDA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA14u;
    // 0x2eda18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED110u, 0x2EDA14u, 0x2EDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA1Cu;
label_2eda1c:
    // 0x2eda1c: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2EDA1Cu;
    {
        const bool branch_taken_0x2eda1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda1c) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDA24u;
    // 0x2eda24: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDA24u;
    {
        const bool branch_taken_0x2eda24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA24u;
        // 0x2eda28: 0x26110078  addiu       $s1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda24) {
            ctx->pc = 0x2EDA78u;
            goto label_2eda78;
        }
    }
    ctx->pc = 0x2EDA2Cu;
    // 0x2eda2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eda2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda30: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EDA30u;
    SET_GPR_U32(ctx, 31, 0x2EDA38u);
    ctx->pc = 0x2EDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA30u;
    // 0x2eda34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EDA30u, 0x2EDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA38u;
label_2eda38:
    // 0x2eda38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eda38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda3c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2eda3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eda40: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA40u;
    {
        const bool branch_taken_0x2eda40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA40u;
        // 0x2eda44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda40) {
            ctx->pc = 0x2EDA58u;
            goto label_2eda58;
        }
    }
    ctx->pc = 0x2EDA48u;
    // 0x2eda48: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2eda48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2eda4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2eda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eda50: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA50u;
    {
        const bool branch_taken_0x2eda50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eda50) {
            ctx->pc = 0x2EDA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA50u;
            // 0x2eda54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA68u;
            goto label_2eda68;
        }
    }
    ctx->pc = 0x2EDA58u;
label_2eda58:
    // 0x2eda58: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eda58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2eda5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eda5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda60: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eda60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eda64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eda64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eda68:
    // 0x2eda68: 0xc0bb298  jal         func_2ECA60
    ctx->pc = 0x2EDA68u;
    SET_GPR_U32(ctx, 31, 0x2EDA70u);
    ctx->pc = 0x2EDA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA68u;
    // 0x2eda6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECA60u, 0x2EDA68u, 0x2EDA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA70u;
label_2eda70:
    // 0x2eda70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDA70u;
    {
        const bool branch_taken_0x2eda70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA70u;
        // 0x2eda74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda70) {
            ctx->pc = 0x2EDA7Cu;
            goto label_2eda7c;
        }
    }
    ctx->pc = 0x2EDA78u;
label_2eda78:
    // 0x2eda78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eda78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eda7c:
    // 0x2eda7c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EDA7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA84u);
    ctx->pc = 0x2EDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA7Cu;
    // 0x2eda80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EDA7Cu, 0x2EDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA84u;
label_2eda84:
    // 0x2eda84: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eda88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eda88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda8c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA8Cu;
    {
        const bool branch_taken_0x2eda8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA8Cu;
        // 0x2eda90: 0x26130068  addiu       $s3, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda8c) {
            ctx->pc = 0x2EDAA4u;
            goto label_2edaa4;
        }
    }
    ctx->pc = 0x2EDA94u;
    // 0x2eda94: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2eda94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2eda98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2eda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eda9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA9Cu;
    {
        const bool branch_taken_0x2eda9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA9Cu;
        // 0x2edaa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda9c) {
            ctx->pc = 0x2EDAB4u;
            goto label_2edab4;
        }
    }
    ctx->pc = 0x2EDAA4u;
label_2edaa4:
    // 0x2edaa4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2edaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2edaa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2edaa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edaac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2edaacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2edab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2edab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2edab4:
    // 0x2edab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2edab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edabc: 0xc0baff0  jal         func_2EBFC0
    ctx->pc = 0x2EDABCu;
    SET_GPR_U32(ctx, 31, 0x2EDAC4u);
    ctx->pc = 0x2EDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDABCu;
    // 0x2edac0: 0x2e880001  sltiu       $t0, $s4, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFC0u, 0x2EDABCu, 0x2EDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAC4u;
label_2edac4:
    // 0x2edac4: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x2edac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x2edac8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2edac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2edacc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDACCu;
    {
        const bool branch_taken_0x2edacc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDACCu;
        // 0x2edad0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edacc) {
            ctx->pc = 0x2EDADCu;
            goto label_2edadc;
        }
    }
    ctx->pc = 0x2EDAD4u;
    // 0x2edad4: 0xc0bb488  jal         func_2ED220
    ctx->pc = 0x2EDAD4u;
    SET_GPR_U32(ctx, 31, 0x2EDADCu);
    ctx->pc = 0x2EDAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAD4u;
    // 0x2edad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED220u, 0x2EDAD4u, 0x2EDADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDADCu;
label_2edadc:
    // 0x2edadc: 0xc0bb5d6  jal         func_2ED758
    ctx->pc = 0x2EDADCu;
    SET_GPR_U32(ctx, 31, 0x2EDAE4u);
    ctx->pc = 0x2EDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDADCu;
    // 0x2edae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED758u, 0x2EDADCu, 0x2EDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAE4u;
label_2edae4:
    // 0x2edae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edae8: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2EDAE8u;
    SET_GPR_U32(ctx, 31, 0x2EDAF0u);
    ctx->pc = 0x2EDAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAE8u;
    // 0x2edaec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2EDAE8u, 0x2EDAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAF0u;
label_2edaf0:
    // 0x2edaf0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2edaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2edaf4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2EDAF4u;
    {
        const bool branch_taken_0x2edaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAF4u;
        // 0x2edaf8: 0xac40c500  sw          $zero, -0x3B00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaf4) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDAFCu;
    // 0x2edafc: 0x0  nop
    ctx->pc = 0x2edafcu;
    // NOP
label_2edb00:
    // 0x2edb00: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x2EDB00u;
    SET_GPR_U32(ctx, 31, 0x2EDB08u);
    ctx->pc = 0x2EDB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB00u;
    // 0x2edb04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x2EDB00u, 0x2EDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB08u;
label_2edb08:
    // 0x2edb08: 0xc0bb616  jal         func_2ED858
    ctx->pc = 0x2EDB08u;
    SET_GPR_U32(ctx, 31, 0x2EDB10u);
    ctx->pc = 0x2EDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB08u;
    // 0x2edb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED858u, 0x2EDB08u, 0x2EDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB10u;
label_2edb10:
    // 0x2edb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb14: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2EDB14u;
    SET_GPR_U32(ctx, 31, 0x2EDB1Cu);
    ctx->pc = 0x2EDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB14u;
    // 0x2edb18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2EDB14u, 0x2EDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB1Cu;
label_2edb1c:
    // 0x2edb1c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2EDB1Cu;
    {
        const bool branch_taken_0x2edb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb1c) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDB24u;
    // 0x2edb24: 0x0  nop
    ctx->pc = 0x2edb24u;
    // NOP
label_2edb28:
    // 0x2edb28: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2EDB28u;
    {
        const bool branch_taken_0x2edb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB28u;
        // 0x2edb2c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb28) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDB30u;
label_2edb30:
    // 0x2edb30: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2edb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2edb34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2edb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edb38: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EDB38u;
    SET_GPR_U32(ctx, 31, 0x2EDB40u);
    ctx->pc = 0x2EDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB38u;
    // 0x2edb3c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EDB38u, 0x2EDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB40u;
label_2edb40:
    // 0x2edb40: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2edb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2edb44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2edb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2edb48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EDB48u;
    {
        const bool branch_taken_0x2edb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb48) {
            ctx->pc = 0x2EDB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDB48u;
            // 0x2edb4c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDB64u;
            goto label_2edb64;
        }
    }
    ctx->pc = 0x2EDB50u;
    // 0x2edb50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2edb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2edb54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2edb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2edb58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDB58u;
    {
        const bool branch_taken_0x2edb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edb58) {
            ctx->pc = 0x2EDB6Cu;
            goto label_2edb6c;
        }
    }
    ctx->pc = 0x2EDB60u;
    // 0x2edb60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2edb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2edb64:
    // 0x2edb64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2edb68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2edb6c:
    // 0x2edb6c: 0xc0a169c  jal         func_285A70
    ctx->pc = 0x2EDB6Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB74u);
    ctx->pc = 0x285A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A70u, 0x2EDB6Cu, 0x2EDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB74u;
label_2edb74:
    // 0x2edb74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2edb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edb78: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EDB78u;
    {
        const bool branch_taken_0x2edb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB78u;
        // 0x2edb7c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb78) {
            ctx->pc = 0x2EDBC8u;
            goto label_2edbc8;
        }
    }
    ctx->pc = 0x2EDB80u;
    // 0x2edb80: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x2edb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2edb84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2edb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edb88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDB88u;
    {
        const bool branch_taken_0x2edb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB88u;
        // 0x2edb8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb88) {
            ctx->pc = 0x2EDBA0u;
            goto label_2edba0;
        }
    }
    ctx->pc = 0x2EDB90u;
    // 0x2edb90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2edb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2edb94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2edb98: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDB98u;
    {
        const bool branch_taken_0x2edb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edb98) {
            ctx->pc = 0x2EDB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDB98u;
            // 0x2edb9c: 0xa0a00130  sb          $zero, 0x130($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDBB0u;
            goto label_2edbb0;
        }
    }
    ctx->pc = 0x2EDBA0u;
label_2edba0:
    // 0x2edba0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2edba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2edba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2edba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edba8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2edba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2edbac: 0xa0a00130  sb          $zero, 0x130($a1)
    ctx->pc = 0x2edbacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x130u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x130u, _value); } while (0);
label_2edbb0:
    // 0x2edbb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2edbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2edbb4: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2EDBB4u;
    SET_GPR_U32(ctx, 31, 0x2EDBBCu);
    ctx->pc = 0x2EDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBB4u;
    // 0x2edbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2EDBB4u, 0x2EDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBBCu;
label_2edbbc:
    // 0x2edbbc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2EDBBCu;
    {
        const bool branch_taken_0x2edbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edbbc) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDBC4u;
    // 0x2edbc4: 0x0  nop
    ctx->pc = 0x2edbc4u;
    // NOP
label_2edbc8:
    // 0x2edbc8: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2edbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2edbcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edbd0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2edbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2edbd4: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2edbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2edbd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2edbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbe0: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2EDBE0u;
    SET_GPR_U32(ctx, 31, 0x2EDBE8u);
    ctx->pc = 0x2EDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBE0u;
    // 0x2edbe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2EDBE0u, 0x2EDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBE8u;
label_2edbe8:
    // 0x2edbe8: 0xc092486  jal         func_249218
    ctx->pc = 0x2EDBE8u;
    SET_GPR_U32(ctx, 31, 0x2EDBF0u);
    ctx->pc = 0x2EDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBE8u;
    // 0x2edbec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2EDBE8u, 0x2EDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBF0u;
label_2edbf0:
    // 0x2edbf0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2edbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2edbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbf8: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2EDBF8u;
    SET_GPR_U32(ctx, 31, 0x2EDC00u);
    ctx->pc = 0x2EDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBF8u;
    // 0x2edbfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2EDBF8u, 0x2EDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC00u;
label_2edc00:
    // 0x2edc00: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2EDC00u;
    {
        const bool branch_taken_0x2edc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc00) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDC08u;
label_2edc08:
    // 0x2edc08: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2edc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2edc0c: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x2edc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2edc10: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2EDC10u;
    {
        const bool branch_taken_0x2edc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc10) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDC18u;
    // 0x2edc18: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2edc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2edc1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc20: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2edc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2edc24: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2edc28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2edc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc2c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2edc30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2edc34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc38: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2EDC38u;
    SET_GPR_U32(ctx, 31, 0x2EDC40u);
    ctx->pc = 0x2EDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC38u;
    // 0x2edc3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2EDC38u, 0x2EDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC40u;
label_2edc40:
    // 0x2edc40: 0xc0bb4da  jal         func_2ED368
    ctx->pc = 0x2EDC40u;
    SET_GPR_U32(ctx, 31, 0x2EDC48u);
    ctx->pc = 0x2EDC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC40u;
    // 0x2edc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED368u, 0x2EDC40u, 0x2EDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC48u;
label_2edc48:
    // 0x2edc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc4c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2EDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC54u);
    ctx->pc = 0x2EDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC4Cu;
    // 0x2edc50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2EDC4Cu, 0x2EDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC54u;
label_2edc54:
    // 0x2edc54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EDC54u;
    {
        const bool branch_taken_0x2edc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc54) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDC5Cu;
    // 0x2edc5c: 0x0  nop
    ctx->pc = 0x2edc5cu;
    // NOP
label_2edc60:
    // 0x2edc60: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2edc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2edc64: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2edc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2edc68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc6c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2edc70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2edc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc74: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2edc78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2edc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2edc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc84: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2EDC84u;
    SET_GPR_U32(ctx, 31, 0x2EDC8Cu);
    ctx->pc = 0x2EDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC84u;
    // 0x2edc88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2EDC84u, 0x2EDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC8Cu;
label_2edc8c:
    // 0x2edc8c: 0xc0bb4f4  jal         func_2ED3D0
    ctx->pc = 0x2EDC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC94u);
    ctx->pc = 0x2EDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC8Cu;
    // 0x2edc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED3D0u, 0x2EDC8Cu, 0x2EDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC94u;
label_2edc94:
    // 0x2edc94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDC94u;
    {
        const bool branch_taken_0x2edc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc94) {
            ctx->pc = 0x2EDCACu;
            goto label_2edcac;
        }
    }
    ctx->pc = 0x2EDC9Cu;
    // 0x2edc9c: 0xc0bb50e  jal         func_2ED438
    ctx->pc = 0x2EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDCA4u);
    ctx->pc = 0x2EDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC9Cu;
    // 0x2edca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED438u, 0x2EDC9Cu, 0x2EDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCA4u;
label_2edca4:
    // 0x2edca4: 0xc0bb520  jal         func_2ED480
    ctx->pc = 0x2EDCA4u;
    SET_GPR_U32(ctx, 31, 0x2EDCACu);
    ctx->pc = 0x2EDCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCA4u;
    // 0x2edca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED480u, 0x2EDCA4u, 0x2EDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCACu;
label_2edcac:
    // 0x2edcac: 0xc0b7a78  jal         func_2DE9E0
    ctx->pc = 0x2EDCACu;
    SET_GPR_U32(ctx, 31, 0x2EDCB4u);
    ctx->pc = 0x2EDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCACu;
    // 0x2edcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x2EDCACu, 0x2EDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCB4u;
label_2edcb4:
    // 0x2edcb4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2edcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2edcb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2edcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2edcbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2edcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edcc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2edcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2edcc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2edcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edcc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2edcc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2edccc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2edcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edcd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2edcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2edcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCD4u;
        // 0x2edcd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDCDCu;
    // 0x2edcdc: 0x0  nop
    ctx->pc = 0x2edcdcu;
    // NOP
    ctx->pc = 0x2edce0u;
}
