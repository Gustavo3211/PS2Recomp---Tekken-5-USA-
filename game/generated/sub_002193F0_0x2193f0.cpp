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

// Function: sub_002193F0
// Address: 0x2193f0 - 0x219678
void sub_002193F0_0x2193f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002193F0_0x2193f0");
#endif

    switch (ctx->pc) {
        case 0x21940cu: goto label_21940c;
        case 0x219414u: goto label_219414;
        case 0x21941cu: goto label_21941c;
        case 0x219460u: goto label_219460;
        case 0x219484u: goto label_219484;
        case 0x219494u: goto label_219494;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194f8u: goto label_2194f8;
        case 0x219504u: goto label_219504;
        case 0x21950cu: goto label_21950c;
        case 0x219514u: goto label_219514;
        case 0x21951cu: goto label_21951c;
        case 0x219524u: goto label_219524;
        case 0x219538u: goto label_219538;
        case 0x219548u: goto label_219548;
        case 0x219558u: goto label_219558;
        case 0x219574u: goto label_219574;
        case 0x21957cu: goto label_21957c;
        case 0x219584u: goto label_219584;
        case 0x2195a0u: goto label_2195a0;
        case 0x2195c0u: goto label_2195c0;
        case 0x2195e0u: goto label_2195e0;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195f8u: goto label_2195f8;
        case 0x219608u: goto label_219608;
        case 0x21961cu: goto label_21961c;
        case 0x219624u: goto label_219624;
        case 0x219630u: goto label_219630;
        case 0x21965cu: goto label_21965c;
        default: break;
    }

    ctx->pc = 0x2193f0u;

    // 0x2193f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2193f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2193f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2193f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2193f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2193f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2193fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2193fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219404: 0xc08661c  jal         func_219870
    ctx->pc = 0x219404u;
    SET_GPR_U32(ctx, 31, 0x21940Cu);
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x219404u, 0x21940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21940Cu;
label_21940c:
    // 0x21940c: 0xc086620  jal         func_219880
    ctx->pc = 0x21940Cu;
    SET_GPR_U32(ctx, 31, 0x219414u);
    ctx->pc = 0x219410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21940Cu;
    // 0x219410: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x21940Cu, 0x219414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219414u;
label_219414:
    // 0x219414: 0xc084f5a  jal         func_213D68
    ctx->pc = 0x219414u;
    SET_GPR_U32(ctx, 31, 0x21941Cu);
    ctx->pc = 0x219418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219414u;
    // 0x219418: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D68u, 0x219414u, 0x21941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21941Cu;
label_21941c:
    // 0x21941c: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x21941Cu;
    {
        const bool branch_taken_0x21941c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21941c) {
            ctx->pc = 0x219420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21941Cu;
            // 0x219420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219660u;
            goto label_219660;
        }
    }
    ctx->pc = 0x219424u;
    // 0x219424: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x219424u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x219428: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x21942c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x21942cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8868u));
    // 0x219430: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x219430u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x219434: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x219434u;
    {
        const bool branch_taken_0x219434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219434u;
        // 0x219438: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219434) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x21943Cu;
    // 0x21943c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219440: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x219440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x219444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219448: 0x8c636800  lw          $v1, 0x6800($v1)
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26624)));
    // 0x21944c: 0x600008  jr          $v1
    ctx->pc = 0x21944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219458u: goto label_219458;
            case 0x219530u: goto label_219530;
            case 0x219590u: goto label_219590;
            case 0x219600u: goto label_219600;
            case 0x219610u: goto label_219610;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21944Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219454u;
    // 0x219454: 0x0  nop
    ctx->pc = 0x219454u;
    // NOP
label_219458:
    // 0x219458: 0xc093542  jal         func_24D508
    ctx->pc = 0x219458u;
    SET_GPR_U32(ctx, 31, 0x219460u);
    ctx->pc = 0x24D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D508u, 0x219458u, 0x219460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219460u;
label_219460:
    // 0x219460: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x219460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x219464: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x219464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x219468: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x219468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21946c: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x21946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x219470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x219474: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x219474u;
    {
        const bool branch_taken_0x219474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x219474) {
            ctx->pc = 0x219478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219474u;
            // 0x219478: 0xa040000e  sb          $zero, 0xE($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21947Cu;
            goto label_21947c;
        }
    }
    ctx->pc = 0x21947Cu;
label_21947c:
    // 0x21947c: 0xc089662  jal         func_225988
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x21947Cu, 0x219484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x219484u;
    {
        const bool branch_taken_0x219484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219484) {
            ctx->pc = 0x219488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219484u;
            // 0x219488: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219660u;
            goto label_219660;
        }
    }
    ctx->pc = 0x21948Cu;
    // 0x21948c: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x21948Cu;
    SET_GPR_U32(ctx, 31, 0x219494u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x21948Cu, 0x219494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219494u;
label_219494:
    // 0x219494: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x219494u;
    {
        const bool branch_taken_0x219494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219494) {
            ctx->pc = 0x219498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219494u;
            // 0x219498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219660u;
            goto label_219660;
        }
    }
    ctx->pc = 0x21949Cu;
    // 0x21949c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194a0: 0xc09342a  jal         func_24D0A8
    ctx->pc = 0x2194A0u;
    SET_GPR_U32(ctx, 31, 0x2194A8u);
    ctx->pc = 0x2194A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194A0u;
    // 0x2194a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D0A8u, 0x2194A0u, 0x2194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194A8u;
label_2194a8:
    // 0x2194a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2194a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2194b0: 0xc092fca  jal         func_24BF28
    ctx->pc = 0x2194B0u;
    SET_GPR_U32(ctx, 31, 0x2194B8u);
    ctx->pc = 0x2194B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194B0u;
    // 0x2194b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF28u, 0x2194B0u, 0x2194B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194B8u;
label_2194b8:
    // 0x2194b8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2194bc: 0x245037e0  addiu       $s0, $v0, 0x37E0
    ctx->pc = 0x2194bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2194c0: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x2194C0u;
    SET_GPR_U32(ctx, 31, 0x2194C8u);
    ctx->pc = 0x2194C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194C0u;
    // 0x2194c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x2194C0u, 0x2194C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194C8u;
label_2194c8:
    // 0x2194c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2194c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194cc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2194CCu;
    SET_GPR_U32(ctx, 31, 0x2194D4u);
    ctx->pc = 0x2194D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194CCu;
    // 0x2194d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2194CCu, 0x2194D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194D4u;
label_2194d4:
    // 0x2194d4: 0xc0a3c48  jal         func_28F120
    ctx->pc = 0x2194D4u;
    SET_GPR_U32(ctx, 31, 0x2194DCu);
    ctx->pc = 0x2194D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194D4u;
    // 0x2194d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x2194D4u, 0x2194DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194DCu;
label_2194dc:
    // 0x2194dc: 0xc0a5a08  jal         func_296820
    ctx->pc = 0x2194DCu;
    SET_GPR_U32(ctx, 31, 0x2194E4u);
    ctx->pc = 0x296820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296820u, 0x2194DCu, 0x2194E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194E4u;
label_2194e4:
    // 0x2194e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2194E4u;
    {
        const bool branch_taken_0x2194e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2194e4) {
            ctx->pc = 0x21950Cu;
            goto label_21950c;
        }
    }
    ctx->pc = 0x2194ECu;
    // 0x2194ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2194ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194f0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2194F0u;
    SET_GPR_U32(ctx, 31, 0x2194F8u);
    ctx->pc = 0x2194F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194F0u;
    // 0x2194f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2194F0u, 0x2194F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194F8u;
label_2194f8:
    // 0x2194f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2194f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194fc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2194FCu;
    SET_GPR_U32(ctx, 31, 0x219504u);
    ctx->pc = 0x219500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194FCu;
    // 0x219500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2194FCu, 0x219504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219504u;
label_219504:
    // 0x219504: 0xc0a5a12  jal         func_296848
    ctx->pc = 0x219504u;
    SET_GPR_U32(ctx, 31, 0x21950Cu);
    ctx->pc = 0x219508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219504u;
    // 0x219508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296848u, 0x219504u, 0x21950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21950Cu;
label_21950c:
    // 0x21950c: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x21950Cu;
    SET_GPR_U32(ctx, 31, 0x219514u);
    ctx->pc = 0x219510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21950Cu;
    // 0x219510: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x21950Cu, 0x219514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219514u;
label_219514:
    // 0x219514: 0xc091a30  jal         func_2468C0
    ctx->pc = 0x219514u;
    SET_GPR_U32(ctx, 31, 0x21951Cu);
    ctx->pc = 0x219518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219514u;
    // 0x219518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2468C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468C0u, 0x219514u, 0x21951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21951Cu;
label_21951c:
    // 0x21951c: 0xc093550  jal         func_24D540
    ctx->pc = 0x21951Cu;
    SET_GPR_U32(ctx, 31, 0x219524u);
    ctx->pc = 0x24D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D540u, 0x21951Cu, 0x219524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219524u;
label_219524:
    // 0x219524: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x219524u;
    {
        const bool branch_taken_0x219524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219524u;
        // 0x219528: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219524) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x21952Cu;
    // 0x21952c: 0x0  nop
    ctx->pc = 0x21952cu;
    // NOP
label_219530:
    // 0x219530: 0xc091a3c  jal         func_2468F0
    ctx->pc = 0x219530u;
    SET_GPR_U32(ctx, 31, 0x219538u);
    ctx->pc = 0x2468F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468F0u, 0x219530u, 0x219538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219538u;
label_219538:
    // 0x219538: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x219538u;
    {
        const bool branch_taken_0x219538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219538u;
        // 0x21953c: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219538) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x219540u;
    // 0x219540: 0xc0a3c1a  jal         func_28F068
    ctx->pc = 0x219540u;
    SET_GPR_U32(ctx, 31, 0x219548u);
    ctx->pc = 0x28F068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F068u, 0x219540u, 0x219548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219548u;
label_219548:
    // 0x219548: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x219548u;
    {
        const bool branch_taken_0x219548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219548u;
        // 0x21954c: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219548) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x219550u;
    // 0x219550: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x219550u;
    SET_GPR_U32(ctx, 31, 0x219558u);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x219550u, 0x219558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219558u;
label_219558:
    // 0x219558: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x219558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x21955c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219560: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x219560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x219564: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x219564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x219568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x219568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21956c: 0xc092958  jal         func_24A560
    ctx->pc = 0x21956Cu;
    SET_GPR_U32(ctx, 31, 0x219574u);
    ctx->pc = 0x219570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21956Cu;
    // 0x219570: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x21956Cu, 0x219574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219574u;
label_219574:
    // 0x219574: 0xc09352c  jal         func_24D4B0
    ctx->pc = 0x219574u;
    SET_GPR_U32(ctx, 31, 0x21957Cu);
    ctx->pc = 0x219578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219574u;
    // 0x219578: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4B0u, 0x219574u, 0x21957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21957Cu;
label_21957c:
    // 0x21957c: 0xc086612  jal         func_219848
    ctx->pc = 0x21957Cu;
    SET_GPR_U32(ctx, 31, 0x219584u);
    ctx->pc = 0x219580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21957Cu;
    // 0x219580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219848u, 0x21957Cu, 0x219584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219584u;
label_219584:
    // 0x219584: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x219584u;
    {
        const bool branch_taken_0x219584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219584u;
        // 0x219588: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219584) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x21958Cu;
    // 0x21958c: 0x0  nop
    ctx->pc = 0x21958cu;
    // NOP
label_219590:
    // 0x219590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219598: 0xc0934e8  jal         func_24D3A0
    ctx->pc = 0x219598u;
    SET_GPR_U32(ctx, 31, 0x2195A0u);
    ctx->pc = 0x21959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219598u;
    // 0x21959c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D3A0u, 0x219598u, 0x2195A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195A0u;
label_2195a0:
    // 0x2195a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2195A0u;
    {
        const bool branch_taken_0x2195a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A0u;
        // 0x2195a4: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195a0) {
            ctx->pc = 0x2195B8u;
            goto label_2195b8;
        }
    }
    ctx->pc = 0x2195A8u;
    // 0x2195a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2195a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2195ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2195ACu;
    {
        const bool branch_taken_0x2195ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195ACu;
        // 0x2195b0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195ac) {
            ctx->pc = 0x2195D8u;
            goto label_2195d8;
        }
    }
    ctx->pc = 0x2195B4u;
    // 0x2195b4: 0x0  nop
    ctx->pc = 0x2195b4u;
    // NOP
label_2195b8:
    // 0x2195b8: 0xc0a3c26  jal         func_28F098
    ctx->pc = 0x2195B8u;
    SET_GPR_U32(ctx, 31, 0x2195C0u);
    ctx->pc = 0x28F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F098u, 0x2195B8u, 0x2195C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195C0u;
label_2195c0:
    // 0x2195c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2195C0u;
    {
        const bool branch_taken_0x2195c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2195c0) {
            ctx->pc = 0x2195D8u;
            goto label_2195d8;
        }
    }
    ctx->pc = 0x2195C8u;
    // 0x2195c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2195c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2195cc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2195CCu;
    {
        const bool branch_taken_0x2195cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2195D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195CCu;
        // 0x2195d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195cc) {
            ctx->pc = 0x2195D8u;
            goto label_2195d8;
        }
    }
    ctx->pc = 0x2195D4u;
    // 0x2195d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2195d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2195d8:
    // 0x2195d8: 0xc0b27de  jal         func_2C9F78
    ctx->pc = 0x2195D8u;
    SET_GPR_U32(ctx, 31, 0x2195E0u);
    ctx->pc = 0x2C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F78u, 0x2195D8u, 0x2195E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195E0u;
label_2195e0:
    // 0x2195e0: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x2195E0u;
    SET_GPR_U32(ctx, 31, 0x2195E8u);
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x2195E0u, 0x2195E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195E8u;
label_2195e8:
    // 0x2195e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2195e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2195ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195f0: 0xc092fca  jal         func_24BF28
    ctx->pc = 0x2195F0u;
    SET_GPR_U32(ctx, 31, 0x2195F8u);
    ctx->pc = 0x2195F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195F0u;
    // 0x2195f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF28u, 0x2195F0u, 0x2195F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195F8u;
label_2195f8:
    // 0x2195f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2195F8u;
    {
        const bool branch_taken_0x2195f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195F8u;
        // 0x2195fc: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195f8) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x219600u;
label_219600:
    // 0x219600: 0xc09355a  jal         func_24D568
    ctx->pc = 0x219600u;
    SET_GPR_U32(ctx, 31, 0x219608u);
    ctx->pc = 0x219604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219600u;
    // 0x219604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D568u, 0x219600u, 0x219608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219608u;
label_219608:
    // 0x219608: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x219608u;
    {
        const bool branch_taken_0x219608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219608u;
        // 0x21960c: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219608) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x219610u;
label_219610:
    // 0x219610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219614: 0xc093480  jal         func_24D200
    ctx->pc = 0x219614u;
    SET_GPR_U32(ctx, 31, 0x21961Cu);
    ctx->pc = 0x219618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219614u;
    // 0x219618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D200u, 0x219614u, 0x21961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21961Cu;
label_21961c:
    // 0x21961c: 0xc093536  jal         func_24D4D8
    ctx->pc = 0x21961Cu;
    SET_GPR_U32(ctx, 31, 0x219624u);
    ctx->pc = 0x24D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4D8u, 0x21961Cu, 0x219624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219624u;
label_219624:
    // 0x219624: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x219624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219628: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x219628u;
    SET_GPR_U32(ctx, 31, 0x219630u);
    ctx->pc = 0x21962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219628u;
    // 0x21962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x219628u, 0x219630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219630u;
label_219630:
    // 0x219630: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x219630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
label_219634:
    // 0x219634: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x219634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x219638: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x219638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21963c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21963Cu;
    {
        const bool branch_taken_0x21963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21963Cu;
        // 0x219640: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21963c) {
            ctx->pc = 0x219660u;
            goto label_219660;
        }
    }
    ctx->pc = 0x219644u;
    // 0x219644: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x219644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x219648: 0x904383c5  lbu         $v1, -0x7C3B($v0)
    ctx->pc = 0x219648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83C5u));
    // 0x21964c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21964Cu;
    {
        const bool branch_taken_0x21964c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21964c) {
            ctx->pc = 0x219650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21964Cu;
            // 0x219650: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219664u;
            goto label_219664;
        }
    }
    ctx->pc = 0x219654u;
    // 0x219654: 0xc092ecc  jal         func_24BB30
    ctx->pc = 0x219654u;
    SET_GPR_U32(ctx, 31, 0x21965Cu);
    ctx->pc = 0x24BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB30u, 0x219654u, 0x21965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21965Cu;
label_21965c:
    // 0x21965c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21965cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_219660:
    // 0x219660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_219664:
    // 0x219664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21966c: 0x3e00008  jr          $ra
    ctx->pc = 0x21966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21966Cu;
        // 0x219670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219674u;
    // 0x219674: 0x0  nop
    ctx->pc = 0x219674u;
    // NOP
    ctx->pc = 0x219678u;
}
