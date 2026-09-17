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

// Function: sub_00497898
// Address: 0x497898 - 0x497a40
void sub_00497898_0x497898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497898_0x497898");
#endif

    switch (ctx->pc) {
        case 0x4978b8u: goto label_4978b8;
        case 0x4978c0u: goto label_4978c0;
        case 0x497928u: goto label_497928;
        default: break;
    }

    ctx->pc = 0x497898u;

    // 0x497898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49789c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4978a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4978a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4978a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4978a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4978a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4978a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4978ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4978acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4978b0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4978B0u;
    SET_GPR_U32(ctx, 31, 0x4978B8u);
    ctx->pc = 0x4978B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4978B0u;
    // 0x4978b4: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4978B0u, 0x4978B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4978B8u;
label_4978b8:
    // 0x4978b8: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x4978B8u;
    SET_GPR_U32(ctx, 31, 0x4978C0u);
    ctx->pc = 0x4978BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4978B8u;
    // 0x4978bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x4978B8u, 0x4978C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4978C0u;
label_4978c0:
    // 0x4978c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4978c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4978c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4978c8: 0x2453d680  addiu       $s3, $v0, -0x2980
    ctx->pc = 0x4978c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4978cc: 0x26240af4  addiu       $a0, $s1, 0xAF4
    ctx->pc = 0x4978ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2804));
    // 0x4978d0: 0x2672220a  addiu       $s2, $s3, 0x220A
    ctx->pc = 0x4978d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8714));
    // 0x4978d4: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x4978d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4978d8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4978d8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F88Au));
    // 0x4978dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4978DCu;
    {
        const bool branch_taken_0x4978dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4978E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978DCu;
        // 0x4978e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978dc) {
            ctx->pc = 0x497920u;
            goto label_497920;
        }
    }
    ctx->pc = 0x4978E4u;
    // 0x4978e4: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x4978e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4978e8: 0xa6050066  sh          $a1, 0x66($s0)
    ctx->pc = 0x4978e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 5));
    // 0x4978ec: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x4978ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x4978f0: 0xa600005e  sh          $zero, 0x5E($s0)
    ctx->pc = 0x4978f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x4978f4: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x4978f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x4978f8: 0xa6050062  sh          $a1, 0x62($s0)
    ctx->pc = 0x4978f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 5));
    // 0x4978fc: 0xa6000064  sh          $zero, 0x64($s0)
    ctx->pc = 0x4978fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x497900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497904: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x497904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x497908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49790c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49790cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497910: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x497910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x497914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497918: 0x8124814  j           func_492050
    ctx->pc = 0x497918u;
    ctx->pc = 0x49791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497918u;
    // 0x49791c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492050u;
    sub_00492050_0x492050(rdram, ctx, runtime); return;
    ctx->pc = 0x497920u;
label_497920:
    // 0x497920: 0xc125d06  jal         func_497418
    ctx->pc = 0x497920u;
    SET_GPR_U32(ctx, 31, 0x497928u);
    ctx->pc = 0x497418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497418u, 0x497920u, 0x497928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497928u;
label_497928:
    // 0x497928: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x497928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49792c: 0x25080b00  addiu       $t0, $t0, 0xB00
    ctx->pc = 0x49792cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2816));
    // 0x497930: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x497930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497934: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x497934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B00u));
    // 0x497938: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x497938u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x49793c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x49793cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x497940: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x497940u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x497944: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x497948: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x497948u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x49794c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49794cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x497950: 0x25cb0afc  addiu       $t3, $t6, 0xAFC
    ctx->pc = 0x497950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 2812));
    // 0x497954: 0x86670004  lh          $a3, 0x4($s3)
    ctx->pc = 0x497954u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x497958: 0x252d0af8  addiu       $t5, $t1, 0xAF8
    ctx->pc = 0x497958u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x49795c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x49795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x497960: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x497960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497964: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x497964u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x497968: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x497968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x49796c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497970: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x497970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x497974: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x497974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x497978: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x497978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x49797c: 0x850a0000  lh          $t2, 0x0($t0)
    ctx->pc = 0x49797cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x497980: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x497980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x497984: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x497984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x497988: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x497988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49798c: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x49798cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497990: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x497990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x497994: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x497994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x497998: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x497998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49799c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x49799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4979a0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4979a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4979a4: 0x262f0af4  addiu       $t7, $s1, 0xAF4
    ctx->pc = 0x4979a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 2804));
    // 0x4979a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4979a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4979ac: 0x11450004  beq         $t2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4979ACu;
    {
        const bool branch_taken_0x4979ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        ctx->pc = 0x4979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979ACu;
        // 0x4979b0: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979ac) {
            ctx->pc = 0x4979C0u;
            goto label_4979c0;
        }
    }
    ctx->pc = 0x4979B4u;
    // 0x4979b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4979B4u;
    {
        const bool branch_taken_0x4979b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4979B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979B4u;
        // 0x4979b8: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979b4) {
            ctx->pc = 0x4979F0u;
            goto label_4979f0;
        }
    }
    ctx->pc = 0x4979BCu;
    // 0x4979bc: 0x0  nop
    ctx->pc = 0x4979bcu;
    // NOP
label_4979c0:
    // 0x4979c0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4979c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4979c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4979c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4979c8: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4979c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4979cc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4979ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4979d0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4979d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4979d4: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x4979d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4979d8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4979d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4979dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4979dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4979e0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4979e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4979e4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4979e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4979e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4979e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4979ec: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4979ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_4979f0:
    // 0x4979f0: 0x85c20afc  lh          $v0, 0xAFC($t6)
    ctx->pc = 0x4979f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2812)));
    // 0x4979f4: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4979f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4979f8: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4979f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4979fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4979fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497a00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x497a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x497a04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497a08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x497a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x497a0c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x497a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x497a10: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x497a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x497a14: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x497a14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x497a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x497a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497a1c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x497a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x497a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497a24: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x497a24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x497a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x497a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497a2c: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x497a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x497a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x497a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x497a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497a38: 0x8124814  j           func_492050
    ctx->pc = 0x497A38u;
    ctx->pc = 0x497A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A38u;
    // 0x497a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492050u;
    sub_00492050_0x492050(rdram, ctx, runtime); return;
    ctx->pc = 0x497A40u;
}
