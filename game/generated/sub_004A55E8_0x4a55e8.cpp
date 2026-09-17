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

// Function: sub_004A55E8
// Address: 0x4a55e8 - 0x4a58c8
void sub_004A55E8_0x4a55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A55E8_0x4a55e8");
#endif

    switch (ctx->pc) {
        case 0x4a5788u: goto label_4a5788;
        case 0x4a5800u: goto label_4a5800;
        case 0x4a5874u: goto label_4a5874;
        default: break;
    }

    ctx->pc = 0x4a55e8u;

    // 0x4a55e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a55ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4a55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4a55f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4a55f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a55f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4a55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4a55f8: 0x26d70130  addiu       $s7, $s6, 0x130
    ctx->pc = 0x4a55f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    // 0x4a55fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a5600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a5600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a5604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a5608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a5608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a560c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a5610: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4a5610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4a5614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a5618: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4a5618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4a561c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A561Cu;
    {
        const bool branch_taken_0x4a561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A561Cu;
        // 0x4a5620: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a561c) {
            ctx->pc = 0x4A5650u;
            goto label_4a5650;
        }
    }
    ctx->pc = 0x4A5624u;
    // 0x4a5624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a5624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a562c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a562cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a5630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5634: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a5634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5638: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a5638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a563c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a563cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5640: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4a5640u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a5644: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a5644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5648: 0x812954c  j           func_4A5530
    ctx->pc = 0x4A5648u;
    ctx->pc = 0x4A564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5648u;
    // 0x4a564c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5530u, 0x4A5648u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A5650u;
label_4a5650:
    // 0x4a5650: 0x96c20118  lhu         $v0, 0x118($s6)
    ctx->pc = 0x4a5650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x4a5654: 0x26100c1c  addiu       $s0, $s0, 0xC1C
    ctx->pc = 0x4a5654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3100));
    // 0x4a5658: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a5658u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a565c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5660: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a5660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a5664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a5664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a5668: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x4a5668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4a566c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a5670: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x4a5670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4a5674: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5678: 0x26c70018  addiu       $a3, $s6, 0x18
    ctx->pc = 0x4a5678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4a567c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5684: 0x26d40128  addiu       $s4, $s6, 0x128
    ctx->pc = 0x4a5684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4a5688: 0x26d50124  addiu       $s5, $s6, 0x124
    ctx->pc = 0x4a5688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x4a568c: 0x86c2011a  lh          $v0, 0x11A($s6)
    ctx->pc = 0x4a568cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 282)));
    // 0x4a5690: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a5690u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a5694: 0x26520c20  addiu       $s2, $s2, 0xC20
    ctx->pc = 0x4a5694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3104));
    // 0x4a5698: 0x26d3012c  addiu       $s3, $s6, 0x12C
    ctx->pc = 0x4a5698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4a569c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a56a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a56a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a56a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a56a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a56ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a56b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a56b4: 0x96c4011c  lhu         $a0, 0x11C($s6)
    ctx->pc = 0x4a56b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x4a56b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a56bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a56bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a56c0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a56c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a56c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a56c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a56c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a56c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a56cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a56d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a56d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a56d4: 0x86c2011e  lh          $v0, 0x11E($s6)
    ctx->pc = 0x4a56d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 286)));
    // 0x4a56d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a56dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a56dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a56e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a56e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a56e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a56ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a56f0: 0x96c40120  lhu         $a0, 0x120($s6)
    ctx->pc = 0x4a56f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 288)));
    // 0x4a56f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a56f8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a56fc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a56fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a5700: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a5704: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a5704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a5708: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a570c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5710: 0x86c20122  lh          $v0, 0x122($s6)
    ctx->pc = 0x4a5710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 290)));
    // 0x4a5714: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5718: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a571c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a5724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a5728: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a5728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a572c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4a572cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a5730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5734: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a5734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a573c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5740: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5744: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5748: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a574c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a574cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5750: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a5750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a5754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5758: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a5758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a575c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a575cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a5760: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a5760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a5764: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5768: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4a5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a576c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a576cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5770: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a5774: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a5774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5778: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a5778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a577c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4a577cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4a5780: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A5780u;
    SET_GPR_U32(ctx, 31, 0x4A5788u);
    ctx->pc = 0x4A5784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5780u;
    // 0x4a5784: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A5780u, 0x4A5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5788u;
label_4a5788:
    // 0x4a5788: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4a5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a578c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a578cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a5790: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a5790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a5794: 0xa6c30022  sh          $v1, 0x22($s6)
    ctx->pc = 0x4a5794u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a5798: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4a5798u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a579c: 0xa6c40024  sh          $a0, 0x24($s6)
    ctx->pc = 0x4a579cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a57a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a57a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a57a8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a57ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a57acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a57b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a57b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a57b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a57b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a57b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a57b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a57bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a57c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a57c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a57c4: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4a57c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a57c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a57c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a57cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a57d0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a57d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a57d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a57d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a57dc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a57dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a57e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a57e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a57e8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a57e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a57ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a57ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a57f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a57f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a57f4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a57f8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A57F8u;
    SET_GPR_U32(ctx, 31, 0x4A5800u);
    ctx->pc = 0x4A57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A57F8u;
    // 0x4a57fc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A57F8u, 0x4A5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5800u;
label_4a5800:
    // 0x4a5800: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4a5800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a5804: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a5804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a5808: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a5808u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a580c: 0xa6c30026  sh          $v1, 0x26($s6)
    ctx->pc = 0x4a580cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a5810: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a5810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5814: 0xa6c20028  sh          $v0, 0x28($s6)
    ctx->pc = 0x4a5814u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5818: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a5818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a581c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a581cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5820: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a5820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5828: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a582c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5834: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a5838: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a5838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a583c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a5840: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5844: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a5844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a5848: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a5848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a584c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a5850: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5854: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a5854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a5858: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a5858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a585c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a585cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a5860: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5864: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a5864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a5868: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4a5868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4a586c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A586Cu;
    SET_GPR_U32(ctx, 31, 0x4A5874u);
    ctx->pc = 0x4A5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A586Cu;
    // 0x4a5870: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A586Cu, 0x4A5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5874u;
label_4a5874:
    // 0x4a5874: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x4a5874u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a5878: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a5878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a587c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x4a587cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x4a5880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a5880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5884: 0xa6d1002a  sh          $s1, 0x2A($s6)
    ctx->pc = 0x4a5884u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a5888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a5888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a588c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a588cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5894: 0xa6c2002c  sh          $v0, 0x2C($s6)
    ctx->pc = 0x4a5894u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a5898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a589c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4a589cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4a58a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a58a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a58a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a58a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a58a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a58ac: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4a58acu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a58b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a58b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a58b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4a58b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a58b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a58b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a58bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A58BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58BCu;
        // 0x4a58c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A58BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A58C4u;
    // 0x4a58c4: 0x0  nop
    ctx->pc = 0x4a58c4u;
    // NOP
    ctx->pc = 0x4a58c8u;
}
