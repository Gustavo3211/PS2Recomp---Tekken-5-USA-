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

// Function: sub_004F64D8
// Address: 0x4f64d8 - 0x4f6b98
void sub_004F64D8_0x4f64d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F64D8_0x4f64d8");
#endif

    switch (ctx->pc) {
        case 0x4f6504u: goto label_4f6504;
        case 0x4f6790u: goto label_4f6790;
        case 0x4f67a8u: goto label_4f67a8;
        case 0x4f6808u: goto label_4f6808;
        case 0x4f6868u: goto label_4f6868;
        case 0x4f688cu: goto label_4f688c;
        case 0x4f68a0u: goto label_4f68a0;
        case 0x4f68c8u: goto label_4f68c8;
        case 0x4f68d0u: goto label_4f68d0;
        case 0x4f6968u: goto label_4f6968;
        case 0x4f6970u: goto label_4f6970;
        case 0x4f6a14u: goto label_4f6a14;
        case 0x4f6a1cu: goto label_4f6a1c;
        case 0x4f6ab0u: goto label_4f6ab0;
        case 0x4f6adcu: goto label_4f6adc;
        case 0x4f6b64u: goto label_4f6b64;
        default: break;
    }

    ctx->pc = 0x4f64d8u;

    // 0x4f64d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f64d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f64dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f64dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f64e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f64e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f64e8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f64e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f64ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f64ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f64f0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f64f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f64f4: 0x440004a  bltz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4F64F4u;
    {
        const bool branch_taken_0x4f64f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F64F4u;
        // 0x4f64f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f64f4) {
            ctx->pc = 0x4F6620u;
            goto label_4f6620;
        }
    }
    ctx->pc = 0x4F64FCu;
    // 0x4f64fc: 0xc12b66e  jal         func_4AD9B8
    ctx->pc = 0x4F64FCu;
    SET_GPR_U32(ctx, 31, 0x4F6504u);
    ctx->pc = 0x4AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD9B8u, 0x4F64FCu, 0x4F6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6504u;
label_4f6504:
    // 0x4f6504: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x4f6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f6508: 0x2618015e  addiu       $t8, $s0, 0x15E
    ctx->pc = 0x4f6508u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f650c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f6510: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x4f6510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f6514: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f6514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6518: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f6518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f651c: 0x26090160  addiu       $t1, $s0, 0x160
    ctx->pc = 0x4f651cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f6520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6524: 0x260a0162  addiu       $t2, $s0, 0x162
    ctx->pc = 0x4f6524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
    // 0x4f6528: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f652c: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x4f652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f6530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6534: 0x260f0164  addiu       $t7, $s0, 0x164
    ctx->pc = 0x4f6534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4f6538: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f6538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f653c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6540: 0x260c0166  addiu       $t4, $s0, 0x166
    ctx->pc = 0x4f6540u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 358));
    // 0x4f6544: 0x2607012c  addiu       $a3, $s0, 0x12C
    ctx->pc = 0x4f6544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f6548: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4f6548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f654c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4f654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f6550: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x4f6550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4f6554: 0x240d01ff  addiu       $t5, $zero, 0x1FF
    ctx->pc = 0x4f6554u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x4f6558: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4f6558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f655c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x4f655cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4f6560: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6564: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f6564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f6568: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4f6568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f656c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f6570: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6574: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f6578: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f6578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f657c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6580: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f6580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f6584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6588: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4f6588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f658c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4f658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f6590: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6594: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f6594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f6598: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4f6598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f659c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f65a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f65a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f65a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f65a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f65a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f65ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f65acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f65b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f65b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f65b8: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f65b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f65bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4f65bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f65c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f65c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f65c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f65c8: 0xa52b0000  sh          $t3, 0x0($t1)
    ctx->pc = 0x4f65c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x4f65cc: 0xa7080000  sh          $t0, 0x0($t8)
    ctx->pc = 0x4f65ccu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f65d0: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x4f65d0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f65d4: 0xa5e00000  sh          $zero, 0x0($t7)
    ctx->pc = 0x4f65d4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f65d8: 0xa60d0034  sh          $t5, 0x34($s0)
    ctx->pc = 0x4f65d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 13));
    // 0x4f65dc: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x4f65dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f65e0: 0xa60e0032  sh          $t6, 0x32($s0)
    ctx->pc = 0x4f65e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 14));
    // 0x4f65e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f65e8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4f65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f65ec: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x4f65ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f65f0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f65f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f65f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f65f8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f65fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f6600: 0x94638488  lhu         $v1, -0x7B78($v1)
    ctx->pc = 0x4f6600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294935688)));
    // 0x4f6604: 0xa5830000  sh          $v1, 0x0($t4)
    ctx->pc = 0x4f6604u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6608: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4f6608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f660c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f660cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6610: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f6610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f6614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6614u;
    {
        const bool branch_taken_0x4f6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6614u;
        // 0x4f6618: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6614) {
            ctx->pc = 0x4F6624u;
            goto label_4f6624;
        }
    }
    ctx->pc = 0x4F661Cu;
    // 0x4f661c: 0x0  nop
    ctx->pc = 0x4f661cu;
    // NOP
label_4f6620:
    // 0x4f6620: 0x2618015e  addiu       $t8, $s0, 0x15E
    ctx->pc = 0x4f6620u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
label_4f6624:
    // 0x4f6624: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4f6624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f6628: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F6628u;
    {
        const bool branch_taken_0x4f6628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6628u;
        // 0x4f662c: 0x260f0164  addiu       $t7, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6628) {
            ctx->pc = 0x4F6674u;
            goto label_4f6674;
        }
    }
    ctx->pc = 0x4F6630u;
    // 0x4f6630: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x4f6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f6634: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f6634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f663c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4f663cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f6640: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F6640u;
    {
        const bool branch_taken_0x4f6640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6640u;
        // 0x4f6644: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6640) {
            ctx->pc = 0x4F6660u;
            goto label_4f6660;
        }
    }
    ctx->pc = 0x4F6648u;
    // 0x4f6648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f664c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f664cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6658: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F6658u;
    ctx->pc = 0x4F665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6658u;
    // 0x4f665c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F6660u;
label_4f6660:
    // 0x4f6660: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4f6660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f6664: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f6668: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4f6668u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f666c: 0x96030162  lhu         $v1, 0x162($s0)
    ctx->pc = 0x4f666cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f6670: 0xa7030000  sh          $v1, 0x0($t8)
    ctx->pc = 0x4f6670u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 3));
label_4f6674:
    // 0x4f6674: 0x97030000  lhu         $v1, 0x0($t8)
    ctx->pc = 0x4f6674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4f6678: 0x260b0032  addiu       $t3, $s0, 0x32
    ctx->pc = 0x4f6678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x4f667c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4f667cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6680: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4f6680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f6684: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f6684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f6688: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x4f6688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f668c: 0xa7030000  sh          $v1, 0x0($t8)
    ctx->pc = 0x4f668cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6690: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4f6690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f6694: 0x86030166  lh          $v1, 0x166($s0)
    ctx->pc = 0x4f6694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f6698: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f669c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f669cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f66a0: 0x695025  or          $t2, $v1, $t1
    ctx->pc = 0x4f66a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f66a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f66a8: 0x1461824  and         $v1, $t2, $a2
    ctx->pc = 0x4f66a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x4f66ac: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4f66acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x4f66b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f66b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f66b4: 0x94848340  lhu         $a0, -0x7CC0($a0)
    ctx->pc = 0x4f66b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294935360)));
    // 0x4f66b8: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x4f66b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f66bc: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x4f66bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f66c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f66c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f66c4: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4f66c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f66c8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f66c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f66cc: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x4f66ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f66d0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x4f66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4f66d4: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4f66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4f66d8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x4f66d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x4f66dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f66dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f66e0: 0xc3200a  movz        $a0, $a2, $v1
    ctx->pc = 0x4f66e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4f66e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f66e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f66e8: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x4f66e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x4f66ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f66f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f66f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f66f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f66f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f66f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f66fc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f66fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f6700: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f6704: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6708: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f670c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4f670cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f6710: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6714: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6714u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6718: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f6718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f671c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4f671cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4f6720: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4f6720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4f6724: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4f6724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4f6728: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6728u;
    {
        const bool branch_taken_0x4f6728 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6728u;
        // 0x4f672c: 0xe91824  and         $v1, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6728) {
            ctx->pc = 0x4F6738u;
            goto label_4f6738;
        }
    }
    ctx->pc = 0x4F6730u;
    // 0x4f6730: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x4f6730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4f6734: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x4f6734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f6738:
    // 0x4f6738: 0xa5670000  sh          $a3, 0x0($t3)
    ctx->pc = 0x4f6738u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f673c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4f673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4f6740: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x4f6740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4f6744: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x4f6744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4f6748: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x4f6748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x4f674c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f6750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f675c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f675cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f6760: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x4f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x4f6764: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f6764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f6768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f6768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f676c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f676cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f6770: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x4f6770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x4f6774: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f6774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f6778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f677c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f6780: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4f6780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4f6784: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6784u;
        // 0x4f6788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F678Cu;
    // 0x4f678c: 0x0  nop
    ctx->pc = 0x4f678cu;
    // NOP
label_4f6790:
    // 0x4f6790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f6794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f6798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f6798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f679c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F679Cu;
    ctx->pc = 0x4F67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F679Cu;
    // 0x4f67a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F67A4u;
    // 0x4f67a4: 0x0  nop
    ctx->pc = 0x4f67a4u;
    // NOP
label_4f67a8:
    // 0x4f67a8: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x4f67a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4f67ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f67acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f67b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f67b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4f67b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f67b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f67bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4f67bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f67c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f67c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f67c4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4f67c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4f67c8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x4f67c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4f67cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f67d0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4f67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4f67d4: 0xa4860008  sh          $a2, 0x8($a0)
    ctx->pc = 0x4f67d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f67d8: 0xa489000e  sh          $t1, 0xE($a0)
    ctx->pc = 0x4f67d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f67dc: 0xa48701be  sh          $a3, 0x1BE($a0)
    ctx->pc = 0x4f67dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 446), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f67e0: 0xa4800168  sh          $zero, 0x168($a0)
    ctx->pc = 0x4f67e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67e4: 0xa48001b4  sh          $zero, 0x1B4($a0)
    ctx->pc = 0x4f67e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67e8: 0xa48001b6  sh          $zero, 0x1B6($a0)
    ctx->pc = 0x4f67e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67ec: 0xa480015e  sh          $zero, 0x15E($a0)
    ctx->pc = 0x4f67ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67f0: 0xa4800160  sh          $zero, 0x160($a0)
    ctx->pc = 0x4f67f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67f4: 0xa4800162  sh          $zero, 0x162($a0)
    ctx->pc = 0x4f67f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67f8: 0xa4800164  sh          $zero, 0x164($a0)
    ctx->pc = 0x4f67f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f67fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F67FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F67FCu;
        // 0x4f6800: 0xa4800166  sh          $zero, 0x166($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 358), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F67FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6804u;
    // 0x4f6804: 0x0  nop
    ctx->pc = 0x4f6804u;
    // NOP
label_4f6808:
    // 0x4f6808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f6808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f680c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f6810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f6810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6814: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f6818: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4f6818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f681c: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4f681cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4f6820: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f6820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6824: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f6828: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f6828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f682c: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F682Cu;
    {
        const bool branch_taken_0x4f682c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F682Cu;
        // 0x4f6830: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f682c) {
            ctx->pc = 0x4F6848u;
            goto label_4f6848;
        }
    }
    ctx->pc = 0x4F6834u;
    // 0x4f6834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f6838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f683c: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F683Cu;
    ctx->pc = 0x4F6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F683Cu;
    // 0x4f6840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f6790;
    ctx->pc = 0x4F6844u;
    // 0x4f6844: 0x0  nop
    ctx->pc = 0x4f6844u;
    // NOP
label_4f6848:
    // 0x4f6848: 0x86030136  lh          $v1, 0x136($s0)
    ctx->pc = 0x4f6848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4f684c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f684cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f6850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6854: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4f6854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f6858: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4f6858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f685c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4f685cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f6860: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6860u;
    SET_GPR_U32(ctx, 31, 0x4F6868u);
    ctx->pc = 0x4F6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6860u;
    // 0x4f6864: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6860u, 0x4F6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6868u;
label_4f6868:
    // 0x4f6868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f686c: 0x960501b6  lhu         $a1, 0x1B6($s0)
    ctx->pc = 0x4f686cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f6870: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4f6870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f6874: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x4f6874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6878: 0x30a50006  andi        $a1, $a1, 0x6
    ctx->pc = 0x4f6878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x4f687c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F687Cu;
    {
        const bool branch_taken_0x4f687c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F687Cu;
        // 0x4f6880: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f687c) {
            ctx->pc = 0x4F6890u;
            goto label_4f6890;
        }
    }
    ctx->pc = 0x4F6884u;
    // 0x4f6884: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F6884u;
    SET_GPR_U32(ctx, 31, 0x4F688Cu);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F6884u, 0x4F688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F688Cu;
label_4f688c:
    // 0x4f688c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f6890:
    // 0x4f6890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f6894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6898: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F6898u;
    ctx->pc = 0x4F689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6898u;
    // 0x4f689c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F68A0u;
label_4f68a0:
    // 0x4f68a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f68a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f68a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f68a8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f68a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f68ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f68acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f68b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f68b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f68b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f68b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f68b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f68bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f68c0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F68C0u;
    SET_GPR_U32(ctx, 31, 0x4F68C8u);
    ctx->pc = 0x4F68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F68C0u;
    // 0x4f68c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F68C0u, 0x4F68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F68C8u;
label_4f68c8:
    // 0x4f68c8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F68C8u;
    SET_GPR_U32(ctx, 31, 0x4F68D0u);
    ctx->pc = 0x4F68CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F68C8u;
    // 0x4f68cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F68C8u, 0x4F68D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F68D0u;
label_4f68d0:
    // 0x4f68d0: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f68d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f68d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f68d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f68d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4f68d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f68dc: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x4f68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f68e0: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f68e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f68e4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f68e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f68e8: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f68e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f68ec: 0x44980b  movn        $s3, $v0, $a0
    ctx->pc = 0x4f68ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x4f68f0: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x4f68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f68f4: 0xa6320024  sh          $s2, 0x24($s1)
    ctx->pc = 0x4f68f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f68f8: 0xa39024  and         $s2, $a1, $v1
    ctx->pc = 0x4f68f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f68fc: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f68fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6900: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f6900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6904: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6908: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f6908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f690c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f690cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6910: 0xa6240022  sh          $a0, 0x22($s1)
    ctx->pc = 0x4f6910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f6914: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6918: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f6918u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f691c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f691cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6920: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f6920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6924: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6928: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f6928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f692c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f692cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6930: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f6930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f6934: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f6938: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f6938u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f693c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6940: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f6940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f6944: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f6944u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f6948: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f6948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f694c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f694cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6950: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f6950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f6954: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f6954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f6958: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f6958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f695c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f695cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f6960: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6960u;
    SET_GPR_U32(ctx, 31, 0x4F6968u);
    ctx->pc = 0x4F6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6960u;
    // 0x4f6964: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6960u, 0x4F6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6968u;
label_4f6968:
    // 0x4f6968: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6968u;
    SET_GPR_U32(ctx, 31, 0x4F6970u);
    ctx->pc = 0x4F696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6968u;
    // 0x4f696c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6968u, 0x4F6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6970u;
label_4f6970:
    // 0x4f6970: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f6970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f6974: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f6974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6978: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f6978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f697c: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x4f697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f6980: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f6980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6984: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6988: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f6988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f698c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f698cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6990: 0xa6320028  sh          $s2, 0x28($s1)
    ctx->pc = 0x4f6990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f6994: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x4f6994u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f6998: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f6998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f699c: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f699cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f69a0: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f69a4: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f69a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f69a8: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f69a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f69ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f69b0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f69b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f69b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f69b8: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4f69b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f69bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f69bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f69c0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f69c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f69c4: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f69c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f69c8: 0x26270128  addiu       $a3, $s1, 0x128
    ctx->pc = 0x4f69c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f69cc: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f69d0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4f69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f69d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f69d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f69d8: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f69d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f69dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f69e0: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x4f69e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4f69e4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f69e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f69e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f69e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f69ec: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f69ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f69f0: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f69f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f69f4: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f69f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f69f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f69fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f6a00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f6a04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6a08: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f6a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f6a0c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6A0Cu;
    SET_GPR_U32(ctx, 31, 0x4F6A14u);
    ctx->pc = 0x4F6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6A0Cu;
    // 0x4f6a10: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6A0Cu, 0x4F6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6A14u;
label_4f6a14:
    // 0x4f6a14: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6A14u;
    SET_GPR_U32(ctx, 31, 0x4F6A1Cu);
    ctx->pc = 0x4F6A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6A14u;
    // 0x4f6a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6A14u, 0x4F6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6A1Cu;
label_4f6a1c:
    // 0x4f6a1c: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f6a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f6a20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f6a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6a24: 0x2702824  and         $a1, $s3, $s0
    ctx->pc = 0x4f6a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f6a28: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x4f6a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f6a2c: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f6a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6a30: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6a34: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f6a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6a38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f6a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6a3c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f6a3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6a40: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x4f6a40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x4f6a44: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f6a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6a48: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6a4c: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f6a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f6a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6a54: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f6a54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f6a58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6a5c: 0x2628012c  addiu       $t0, $s1, 0x12C
    ctx->pc = 0x4f6a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f6a60: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6a64: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6a68: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f6a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6a6c: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6a70: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f6a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6a74: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6a74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6a78: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f6a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f6a7c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f6a80: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f6a80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f6a84: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6a88: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f6a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f6a8c: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f6a8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f6a90: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6a94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6a98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f6a9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f6aa0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f6aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f6aa4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f6aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f6aa8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6AA8u;
    SET_GPR_U32(ctx, 31, 0x4F6AB0u);
    ctx->pc = 0x4F6AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6AA8u;
    // 0x4f6aac: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6AA8u, 0x4F6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6AB0u;
label_4f6ab0:
    // 0x4f6ab0: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f6ab4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6ab8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f6abc: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4f6abcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f6ac0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f6ac4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x4f6ac4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6ac8: 0x2673002d  addiu       $s3, $s3, 0x2D
    ctx->pc = 0x4f6ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
    // 0x4f6acc: 0xa633015e  sh          $s3, 0x15E($s1)
    ctx->pc = 0x4f6accu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f6ad0: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6ad4: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F6AD4u;
    SET_GPR_U32(ctx, 31, 0x4F6ADCu);
    ctx->pc = 0x4F6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6AD4u;
    // 0x4f6ad8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F6AD4u, 0x4F6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6ADCu;
label_4f6adc:
    // 0x4f6adc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f6adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6ae0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6ae4: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4f6ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f6ae8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f6ae8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6aec: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f6aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f6af0: 0x324201ff  andi        $v0, $s2, 0x1FF
    ctx->pc = 0x4f6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    // 0x4f6af4: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f6af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6af8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6afc: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f6afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6b00: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f6b00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6b04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f6b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6b08: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6b0c: 0xc4980a  movz        $s3, $a2, $a0
    ctx->pc = 0x4f6b0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f6b10: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6b10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6b14: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f6b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6b18: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f6b1c: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f6b20: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6b24: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f6b24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f6b28: 0xc39024  and         $s2, $a2, $v1
    ctx->pc = 0x4f6b28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f6b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6b30: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f6b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6b34: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f6b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6b38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6b3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6b40: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6b44: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f6b44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f6b48: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6b4c: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4f6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6b50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6b50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6b54: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f6b58: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f6b58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6b5c: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F6B5Cu;
    SET_GPR_U32(ctx, 31, 0x4F6B64u);
    ctx->pc = 0x4F6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6B5Cu;
    // 0x4f6b60: 0xa6320136  sh          $s2, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F6B5Cu, 0x4F6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6B64u;
label_4f6b64:
    // 0x4f6b64: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f6b68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f6b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f6b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6b78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f6b7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f6b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6b80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f6b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f6b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f6b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6b88: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f6b88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f6b8c: 0x813da02  j           func_4F6808
    ctx->pc = 0x4F6B8Cu;
    ctx->pc = 0x4F6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6B8Cu;
    // 0x4f6b90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6808u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f6808;
    ctx->pc = 0x4F6B94u;
    // 0x4f6b94: 0x0  nop
    ctx->pc = 0x4f6b94u;
    // NOP
    ctx->pc = 0x4f6b98u;
}
