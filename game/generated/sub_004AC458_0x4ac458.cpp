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

// Function: sub_004AC458
// Address: 0x4ac458 - 0x4ac848
void sub_004AC458_0x4ac458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC458_0x4ac458");
#endif

    switch (ctx->pc) {
        case 0x4ac468u: goto label_4ac468;
        case 0x4ac560u: goto label_4ac560;
        case 0x4ac598u: goto label_4ac598;
        case 0x4ac5d0u: goto label_4ac5d0;
        case 0x4ac5d8u: goto label_4ac5d8;
        case 0x4ac5e0u: goto label_4ac5e0;
        case 0x4ac600u: goto label_4ac600;
        case 0x4ac654u: goto label_4ac654;
        case 0x4ac670u: goto label_4ac670;
        case 0x4ac67cu: goto label_4ac67c;
        case 0x4ac69cu: goto label_4ac69c;
        case 0x4ac6a4u: goto label_4ac6a4;
        case 0x4ac6c0u: goto label_4ac6c0;
        case 0x4ac728u: goto label_4ac728;
        case 0x4ac780u: goto label_4ac780;
        case 0x4ac7c0u: goto label_4ac7c0;
        case 0x4ac824u: goto label_4ac824;
        default: break;
    }

    ctx->pc = 0x4ac458u;

    // 0x4ac458: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ac458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ac45c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC45Cu;
        // 0x4ac460: 0x24424400  addiu       $v0, $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC464u;
    // 0x4ac464: 0x0  nop
    ctx->pc = 0x4ac464u;
    // NOP
label_4ac468:
    // 0x4ac468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ac468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ac46c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ac470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ac470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ac474: 0x24460cc4  addiu       $a2, $v0, 0xCC4
    ctx->pc = 0x4ac474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3268));
    // 0x4ac478: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ac478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ac47c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ac47cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac480: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ac480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ac484: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4ac484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x4ac488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac48c: 0x2669d680  addiu       $t1, $s3, -0x2980
    ctx->pc = 0x4ac48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4ac490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ac490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ac494: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x4ac494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac498: 0x26510016  addiu       $s1, $s2, 0x16
    ctx->pc = 0x4ac498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 22));
    // 0x4ac49c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ac49cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0CC4u));
    // 0x4ac4a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ac4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0CC4u));
    // 0x4ac4a4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ac4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ac4a8: 0x85240018  lh          $a0, 0x18($t1)
    ctx->pc = 0x4ac4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4ac4ac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ac4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ac4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ac4b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ac4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ac4b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ac4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ac4bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ac4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ac4c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ac4c4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4ac4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4ac4c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ac4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ac4cc: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4ac4ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ac4d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ac4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ac4d4: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x4ac4d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ac4d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ac4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ac4dc: 0x94640cc8  lhu         $a0, 0xCC8($v1)
    ctx->pc = 0x4ac4dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3272)));
    // 0x4ac4e0: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x4ac4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4ac4e4: 0xa5250010  sh          $a1, 0x10($t1)
    ctx->pc = 0x4ac4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ac4e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC4E8u;
    {
        const bool branch_taken_0x4ac4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4E8u;
        // 0x4ac4ec: 0xa524000e  sh          $a0, 0xE($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4e8) {
            ctx->pc = 0x4AC52Cu;
            goto label_4ac52c;
        }
    }
    ctx->pc = 0x4AC4F0u;
    // 0x4ac4f0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ac4f4: 0x8443d64e  lh          $v1, -0x29B2($v0)
    ctx->pc = 0x4ac4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D64Eu));
    // 0x4ac4f8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ac4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ac4fc: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x4ac4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ac500: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ac500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ac504: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac508: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ac508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ac50c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4ac50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4ac510: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ac510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ac514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac518: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ac518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ac51c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ac51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ac520: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC520u;
    {
        const bool branch_taken_0x4ac520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC520u;
        // 0x4ac524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac520) {
            ctx->pc = 0x4AC52Cu;
            goto label_4ac52c;
        }
    }
    ctx->pc = 0x4AC528u;
    // 0x4ac528: 0xa5220016  sh          $v0, 0x16($t1)
    ctx->pc = 0x4ac528u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 2));
label_4ac52c:
    // 0x4ac52c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ac52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ac530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ac530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ac534: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4ac534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ac538: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4AC538u;
    {
        const bool branch_taken_0x4ac538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC538u;
        // 0x4ac53c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac538) {
            ctx->pc = 0x4AC5C0u;
            goto label_4ac5c0;
        }
    }
    ctx->pc = 0x4AC540u;
    // 0x4ac540: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ac540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ac544: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ac544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4ac548: 0x24700cd0  addiu       $s0, $v1, 0xCD0
    ctx->pc = 0x4ac548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
    // 0x4ac54c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4ac54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4ac550: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ac550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CD0u, _value); } while (0);
    // 0x4ac554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac558: 0xc123bc8  jal         func_48EF20
    ctx->pc = 0x4AC558u;
    SET_GPR_U32(ctx, 31, 0x4AC560u);
    ctx->pc = 0x4AC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC558u;
    // 0x4ac55c: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF20u, 0x4AC558u, 0x4AC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC560u;
label_4ac560:
    // 0x4ac560: 0x3c07000c  lui         $a3, 0xC
    ctx->pc = 0x4ac560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12 << 16));
    // 0x4ac564: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x4ac564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4ac568: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x4ac568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x4ac56c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ac56cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ac570: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4ac570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ac574: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4ac574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ac578: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4ac578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac57c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ac57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ac580: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x4ac580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ac584: 0x4a1000e  bgez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4AC584u;
    {
        const bool branch_taken_0x4ac584 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC584u;
        // 0x4ac588: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac584) {
            ctx->pc = 0x4AC5C0u;
            goto label_4ac5c0;
        }
    }
    ctx->pc = 0x4AC58Cu;
    // 0x4ac58c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4ac58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4ac590: 0xc124910  jal         func_492440
    ctx->pc = 0x4AC590u;
    SET_GPR_U32(ctx, 31, 0x4AC598u);
    ctx->pc = 0x4AC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC590u;
    // 0x4ac594: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4AC590u, 0x4AC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC598u;
label_4ac598:
    // 0x4ac598: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ac598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ac59c: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x4ac59cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ac5a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac5a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ac5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac5a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ac5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac5ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ac5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ac5b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5B4u;
        // 0x4ac5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC5BCu;
    // 0x4ac5bc: 0x0  nop
    ctx->pc = 0x4ac5bcu;
    // NOP
label_4ac5c0:
    // 0x4ac5c0: 0x2663d680  addiu       $v1, $s3, -0x2980
    ctx->pc = 0x4ac5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4ac5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac5c8: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x4AC5C8u;
    SET_GPR_U32(ctx, 31, 0x4AC5D0u);
    ctx->pc = 0x4AC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5C8u;
    // 0x4ac5cc: 0xa4620012  sh          $v0, 0x12($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x4AC5C8u, 0x4AC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5D0u;
label_4ac5d0:
    // 0x4ac5d0: 0xc124642  jal         func_491908
    ctx->pc = 0x4AC5D0u;
    SET_GPR_U32(ctx, 31, 0x4AC5D8u);
    ctx->pc = 0x491908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491908u, 0x4AC5D0u, 0x4AC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5D8u;
label_4ac5d8:
    // 0x4ac5d8: 0xc1246f2  jal         func_491BC8
    ctx->pc = 0x4AC5D8u;
    SET_GPR_U32(ctx, 31, 0x4AC5E0u);
    ctx->pc = 0x491BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491BC8u, 0x4AC5D8u, 0x4AC5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5E0u;
label_4ac5e0:
    // 0x4ac5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ac5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac5e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ac5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac5ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ac5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ac5f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac5f4: 0x81248aa  j           func_4922A8
    ctx->pc = 0x4AC5F4u;
    ctx->pc = 0x4AC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5F4u;
    // 0x4ac5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4922A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4922A8u, 0x4AC5F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC5FCu;
    // 0x4ac5fc: 0x0  nop
    ctx->pc = 0x4ac5fcu;
    // NOP
label_4ac600:
    // 0x4ac600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac604: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ac604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ac608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac60c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ac60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ac610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ac610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ac614: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ac614u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ac618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ac618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ac61c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x4ac61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ac620: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4ac620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4ac624: 0x24a50ccc  addiu       $a1, $a1, 0xCCC
    ctx->pc = 0x4ac624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3276));
    // 0x4ac628: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ac628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ac62c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ac62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac630: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ac630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CCCu));
    // 0x4ac634: 0x26310cd0  addiu       $s1, $s1, 0xCD0
    ctx->pc = 0x4ac634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3280));
    // 0x4ac638: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x4ac638u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D6A6u));
    // 0x4ac63c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac640: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ac640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ac644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac648: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ac648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ac64c: 0xc124ae6  jal         func_492B98
    ctx->pc = 0x4AC64Cu;
    SET_GPR_U32(ctx, 31, 0x4AC654u);
    ctx->pc = 0x4AC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC64Cu;
    // 0x4ac650: 0x84a40000  lh          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492B98u, 0x4AC64Cu, 0x4AC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC654u;
label_4ac654:
    // 0x4ac654: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x4ac654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ac658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ac65c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ac65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ac660: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ac664: 0xa61222ca  sh          $s2, 0x22CA($s0)
    ctx->pc = 0x4ac664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8906), (uint16_t)GPR_U32(ctx, 18));
    // 0x4ac668: 0xc124910  jal         func_492440
    ctx->pc = 0x4AC668u;
    SET_GPR_U32(ctx, 31, 0x4AC670u);
    ctx->pc = 0x4AC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC668u;
    // 0x4ac66c: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4AC668u, 0x4AC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC670u;
label_4ac670:
    // 0x4ac670: 0xa612000a  sh          $s2, 0xA($s0)
    ctx->pc = 0x4ac670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x4ac674: 0xc12a0c6  jal         func_4A8318
    ctx->pc = 0x4AC674u;
    SET_GPR_U32(ctx, 31, 0x4AC67Cu);
    ctx->pc = 0x4AC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC674u;
    // 0x4ac678: 0xa600229c  sh          $zero, 0x229C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8860), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8318u, 0x4AC674u, 0x4AC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC67Cu;
label_4ac67c:
    // 0x4ac67c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ac67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ac680: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ac680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac684: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ac684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ac688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac68c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac690: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ac694: 0xc12a0e2  jal         func_4A8388
    ctx->pc = 0x4AC694u;
    SET_GPR_U32(ctx, 31, 0x4AC69Cu);
    ctx->pc = 0x4AC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC694u;
    // 0x4ac698: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8388u, 0x4AC694u, 0x4AC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC69Cu;
label_4ac69c:
    // 0x4ac69c: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x4AC69Cu;
    SET_GPR_U32(ctx, 31, 0x4AC6A4u);
    ctx->pc = 0x4AC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC69Cu;
    // 0x4ac6a0: 0xa6002268  sh          $zero, 0x2268($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8808), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x4AC69Cu, 0x4AC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC6A4u;
label_4ac6a4:
    // 0x4ac6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ac6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac6ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ac6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac6b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ac6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ac6b4: 0x8127982  j           func_49E608
    ctx->pc = 0x4AC6B4u;
    ctx->pc = 0x4AC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC6B4u;
    // 0x4ac6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E608u, 0x4AC6B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC6BCu;
    // 0x4ac6bc: 0x0  nop
    ctx->pc = 0x4ac6bcu;
    // NOP
label_4ac6c0:
    // 0x4ac6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac6c4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ac6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ac6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac6cc: 0x24840cc4  addiu       $a0, $a0, 0xCC4
    ctx->pc = 0x4ac6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3268));
    // 0x4ac6d0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4ac6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4ac6d4: 0x84a2d642  lh          $v0, -0x29BE($a1)
    ctx->pc = 0x4ac6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D642u));
    // 0x4ac6d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ac6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac6dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CC4u));
    // 0x4ac6e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac6e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac6e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac6ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ac6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ac6f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac6f4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ac6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ac6f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4ac6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4ac6fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac700: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac704: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ac704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ac708: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ac708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ac70c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC70Cu;
    {
        const bool branch_taken_0x4ac70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC70Cu;
        // 0x4ac710: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac70c) {
            ctx->pc = 0x4AC720u;
            goto label_4ac720;
        }
    }
    ctx->pc = 0x4AC714u;
    // 0x4ac714: 0x812b180  j           func_4AC600
    ctx->pc = 0x4AC714u;
    ctx->pc = 0x4AC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC714u;
    // 0x4ac718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC600u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ac600;
    ctx->pc = 0x4AC71Cu;
    // 0x4ac71c: 0x0  nop
    ctx->pc = 0x4ac71cu;
    // NOP
label_4ac720:
    // 0x4ac720: 0x812b11a  j           func_4AC468
    ctx->pc = 0x4AC720u;
    ctx->pc = 0x4AC724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC720u;
    // 0x4ac724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC468u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ac468;
    ctx->pc = 0x4AC728u;
label_4ac728:
    // 0x4ac728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac72c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ac72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ac730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac734: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ac734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ac738: 0x24840cc4  addiu       $a0, $a0, 0xCC4
    ctx->pc = 0x4ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3268));
    // 0x4ac73c: 0x2447d680  addiu       $a3, $v0, -0x2980
    ctx->pc = 0x4ac73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ac740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ac740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CC4u));
    // 0x4ac744: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ac744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac748: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4ac748u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D6A4u));
    // 0x4ac74c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac750: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac754: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac758: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac75c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ac75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ac760: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ac760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ac764: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC764u;
    {
        const bool branch_taken_0x4ac764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x4AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC764u;
        // 0x4ac768: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac764) {
            ctx->pc = 0x4AC770u;
            goto label_4ac770;
        }
    }
    ctx->pc = 0x4AC76Cu;
    // 0x4ac76c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4ac76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4ac770:
    // 0x4ac770: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x4ac770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x4ac774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac778: 0x812b11a  j           func_4AC468
    ctx->pc = 0x4AC778u;
    ctx->pc = 0x4AC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC778u;
    // 0x4ac77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC468u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ac468;
    ctx->pc = 0x4AC780u;
label_4ac780:
    // 0x4ac780: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ac780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ac784: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac788: 0x84430cc4  lh          $v1, 0xCC4($v0)
    ctx->pc = 0x4ac788u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0CC4u));
    // 0x4ac78c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ac78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac790: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC790u;
    {
        const bool branch_taken_0x4ac790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC790u;
        // 0x4ac794: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac790) {
            ctx->pc = 0x4AC7A8u;
            goto label_4ac7a8;
        }
    }
    ctx->pc = 0x4AC798u;
    // 0x4ac798: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ac798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ac79c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC79Cu;
    {
        const bool branch_taken_0x4ac79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC79Cu;
        // 0x4ac7a0: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac79c) {
            ctx->pc = 0x4AC7B0u;
            goto label_4ac7b0;
        }
    }
    ctx->pc = 0x4AC7A4u;
    // 0x4ac7a4: 0x0  nop
    ctx->pc = 0x4ac7a4u;
    // NOP
label_4ac7a8:
    // 0x4ac7a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ac7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ac7ac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4ac7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4ac7b0:
    // 0x4ac7b0: 0xac62d69c  sw          $v0, -0x2964($v1)
    ctx->pc = 0x4ac7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956700), GPR_U32(ctx, 2));
    // 0x4ac7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac7b8: 0x812b11a  j           func_4AC468
    ctx->pc = 0x4AC7B8u;
    ctx->pc = 0x4AC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC7B8u;
    // 0x4ac7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC468u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ac468;
    ctx->pc = 0x4AC7C0u;
label_4ac7c0:
    // 0x4ac7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac7c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ac7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ac7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac7cc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ac7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ac7d0: 0x24840cc4  addiu       $a0, $a0, 0xCC4
    ctx->pc = 0x4ac7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3268));
    // 0x4ac7d4: 0x2446d680  addiu       $a2, $v0, -0x2980
    ctx->pc = 0x4ac7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ac7d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ac7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CC4u));
    // 0x4ac7dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ac7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac7e0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ac7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D680u));
    // 0x4ac7e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac7e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac7ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac7f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ac7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ac7f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac7f8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ac7f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ac7fc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4ac7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4ac800: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac808: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ac808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ac80c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ac80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ac810: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x4ac810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x4ac814: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC814u;
    {
        const bool branch_taken_0x4ac814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC814u;
        // 0x4ac818: 0x3c020009  lui         $v0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac814) {
            ctx->pc = 0x4AC830u;
            goto label_4ac830;
        }
    }
    ctx->pc = 0x4AC81Cu;
    // 0x4ac81c: 0xc123290  jal         func_48CA40
    ctx->pc = 0x4AC81Cu;
    SET_GPR_U32(ctx, 31, 0x4AC824u);
    ctx->pc = 0x4AC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC81Cu;
    // 0x4ac820: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA40u, 0x4AC81Cu, 0x4AC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC824u;
label_4ac824:
    // 0x4ac824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC824u;
    {
        const bool branch_taken_0x4ac824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC824u;
        // 0x4ac828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac824) {
            ctx->pc = 0x4AC83Cu;
            goto label_4ac83c;
        }
    }
    ctx->pc = 0x4AC82Cu;
    // 0x4ac82c: 0x0  nop
    ctx->pc = 0x4ac82cu;
    // NOP
label_4ac830:
    // 0x4ac830: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ac830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ac834: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x4ac834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x4ac838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac83c:
    // 0x4ac83c: 0x812b1b0  j           func_4AC6C0
    ctx->pc = 0x4AC83Cu;
    ctx->pc = 0x4AC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC83Cu;
    // 0x4ac840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC6C0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ac6c0;
    ctx->pc = 0x4AC844u;
    // 0x4ac844: 0x0  nop
    ctx->pc = 0x4ac844u;
    // NOP
    ctx->pc = 0x4ac848u;
}
