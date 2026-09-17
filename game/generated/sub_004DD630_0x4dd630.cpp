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

// Function: sub_004DD630
// Address: 0x4dd630 - 0x4ddb08
void sub_004DD630_0x4dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD630_0x4dd630");
#endif

    ctx->pc = 0x4dd630u;

    // 0x4dd630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd634: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4dd634u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd63c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4dd63cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4dd640: 0x25e41120  addiu       $a0, $t7, 0x1120
    ctx->pc = 0x4dd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4384));
    // 0x4dd644: 0x256d0168  addiu       $t5, $t3, 0x168
    ctx->pc = 0x4dd644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 360));
    // 0x4dd648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dd648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dd64c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4dd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd650: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4dd650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dd654: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dd654u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dd658: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd65c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4dd65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4dd660: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd664: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd668: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4dd668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd66c: 0x3401fe00  ori         $at, $zero, 0xFE00
    ctx->pc = 0x4dd66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x4dd670: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4dd670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4dd674: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd678: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DD678u;
    {
        const bool branch_taken_0x4dd678 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD678u;
        // 0x4dd67c: 0x25c61124  addiu       $a2, $t6, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd678) {
            ctx->pc = 0x4DD690u;
            goto label_4dd690;
        }
    }
    ctx->pc = 0x4DD680u;
    // 0x4dd680: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DD684u;
    {
        const bool branch_taken_0x4dd684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD684u;
        // 0x4dd688: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd684) {
            ctx->pc = 0x4DD698u;
            goto label_4dd698;
        }
    }
    ctx->pc = 0x4DD68Cu;
    // 0x4dd68c: 0x0  nop
    ctx->pc = 0x4dd68cu;
    // NOP
label_4dd690:
    // 0x4dd690: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd694: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x4dd694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4dd698:
    // 0x4dd698: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x4dd698u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x4dd69c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd6a0: 0x27241128  addiu       $a0, $t9, 0x1128
    ctx->pc = 0x4dd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4392));
    // 0x4dd6a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4dd6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4dd6a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dd6ac: 0x25cc1124  addiu       $t4, $t6, 0x1124
    ctx->pc = 0x4dd6acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4388));
    // 0x4dd6b0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4dd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4dd6b4: 0x25e51120  addiu       $a1, $t7, 0x1120
    ctx->pc = 0x4dd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4384));
    // 0x4dd6b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd6bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dd6bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd6c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd6c4: 0x95890000  lhu         $t1, 0x0($t4)
    ctx->pc = 0x4dd6c4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dd6c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd6cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd6d0: 0x94400  sll         $t0, $t1, 16
    ctx->pc = 0x4dd6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4dd6d4: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4dd6d4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4dd6d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4dd6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd6dc: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4dd6dcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4dd6e0: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x4dd6e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd6e4: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4dd6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4dd6e8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4dd6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd6ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd6f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd6f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd6f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dd6f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dd6f8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd6fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd700: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd704: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd708: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4dd708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd70c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4dd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4dd710: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd714: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd718: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd71c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4dd71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd720: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4dd720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4dd724: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4dd724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4dd728: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4dd728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4dd72c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4dd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x4dd730: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dd730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd734: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4dd734u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd738: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dd738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd73c: 0x85620166  lh          $v0, 0x166($t3)
    ctx->pc = 0x4dd73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 358)));
    // 0x4dd740: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd744: 0x8f061140  lw          $a2, 0x1140($t8)
    ctx->pc = 0x4dd744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4416)));
    // 0x4dd748: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd74c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd750: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dd750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dd754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd758: 0x84c40166  lh          $a0, 0x166($a2)
    ctx->pc = 0x4dd758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 358)));
    // 0x4dd75c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dd75cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd760: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dd760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dd764: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd76c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dd770: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dd770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd774: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DD774u;
    {
        const bool branch_taken_0x4dd774 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD774u;
        // 0x4dd778: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd774) {
            ctx->pc = 0x4DD788u;
            goto label_4dd788;
        }
    }
    ctx->pc = 0x4DD77Cu;
    // 0x4dd77c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4DD77Cu;
    {
        const bool branch_taken_0x4dd77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD77Cu;
        // 0x4dd780: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd77c) {
            ctx->pc = 0x4DD78Cu;
            goto label_4dd78c;
        }
    }
    ctx->pc = 0x4DD784u;
    // 0x4dd784: 0x0  nop
    ctx->pc = 0x4dd784u;
    // NOP
label_4dd788:
    // 0x4dd788: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dd788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4dd78c:
    // 0x4dd78c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4dd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4dd790: 0x25e91120  addiu       $t1, $t7, 0x1120
    ctx->pc = 0x4dd790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4384));
    // 0x4dd794: 0x25c81124  addiu       $t0, $t6, 0x1124
    ctx->pc = 0x4dd794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 4388));
    // 0x4dd798: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dd798u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd79c: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x4dd79cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd7a0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4dd7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd7a4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4dd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd7a8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4dd7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4dd7ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4dd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4dd7b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd7b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd7b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd7bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dd7bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dd7c0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd7c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd7c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4dd7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4dd7cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd7d0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dd7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd7d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dd7d8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd7dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x4dd7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd7e0: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4dd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4dd7e4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4dd7e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd7e8: 0x2c4200aa  sltiu       $v0, $v0, 0xAA
    ctx->pc = 0x4dd7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x4dd7ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DD7ECu;
    {
        const bool branch_taken_0x4dd7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd7ec) {
            ctx->pc = 0x4DD7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD7ECu;
            // 0x4dd7f0: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD808u;
            goto label_4dd808;
        }
    }
    ctx->pc = 0x4DD7F4u;
    // 0x4dd7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd7f8: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4dd7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd7fc: 0x8137634  j           func_4DD8D0
    ctx->pc = 0x4DD7FCu;
    ctx->pc = 0x4DD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD7FCu;
    // 0x4dd800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD8D0u;
    goto label_4dd8d0;
    ctx->pc = 0x4DD804u;
    // 0x4dd804: 0x0  nop
    ctx->pc = 0x4dd804u;
    // NOP
label_4dd808:
    // 0x4dd808: 0x27261128  addiu       $a2, $t9, 0x1128
    ctx->pc = 0x4dd808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4392));
    // 0x4dd80c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd810: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4dd810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd814: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dd814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dd818: 0x34841555  ori         $a0, $a0, 0x1555
    ctx->pc = 0x4dd818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5461);
    // 0x4dd81c: 0x30a21555  andi        $v0, $a1, 0x1555
    ctx->pc = 0x4dd81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)5461);
    // 0x4dd820: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4dd820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4dd824: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4dd824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4dd828: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x4dd828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dd82c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dd82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4dd830: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dd830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dd834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd838: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4dd838u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4dd83c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4dd83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd840: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x4dd840u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd844: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4dd844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4dd848: 0x8f051140  lw          $a1, 0x1140($t8)
    ctx->pc = 0x4dd848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4416)));
    // 0x4dd84c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd850: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd854: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dd854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dd858: 0x85620162  lh          $v0, 0x162($t3)
    ctx->pc = 0x4dd858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 354)));
    // 0x4dd85c: 0x94c80000  lhu         $t0, 0x0($a2)
    ctx->pc = 0x4dd85cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd860: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd864: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dd864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dd868: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dd868u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dd86c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dd86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dd870: 0x84a30162  lh          $v1, 0x162($a1)
    ctx->pc = 0x4dd870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x4dd874: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dd874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dd878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dd87c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd880: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dd880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dd884: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dd884u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dd888: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dd888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dd88c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dd88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd890: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4dd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dd894: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dd894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dd898: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dd898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dd89c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dd8a0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4dd8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dd8a4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4dd8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4dd8a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DD8A8u;
    {
        const bool branch_taken_0x4dd8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD8A8u;
        // 0x4dd8ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd8a8) {
            ctx->pc = 0x4DD8C0u;
            goto label_4dd8c0;
        }
    }
    ctx->pc = 0x4DD8B0u;
    // 0x4dd8b0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4dd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd8b4: 0x813764c  j           func_4DD930
    ctx->pc = 0x4DD8B4u;
    ctx->pc = 0x4DD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD8B4u;
    // 0x4dd8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD930u;
    goto label_4dd930;
    ctx->pc = 0x4DD8BCu;
    // 0x4dd8bc: 0x0  nop
    ctx->pc = 0x4dd8bcu;
    // NOP
label_4dd8c0:
    // 0x4dd8c0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4dd8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd8c4: 0x8137634  j           func_4DD8D0
    ctx->pc = 0x4DD8C4u;
    ctx->pc = 0x4DD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD8C4u;
    // 0x4dd8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD8D0u;
    goto label_4dd8d0;
    ctx->pc = 0x4DD8CCu;
    // 0x4dd8cc: 0x0  nop
    ctx->pc = 0x4dd8ccu;
    // NOP
label_4dd8d0:
    // 0x4dd8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd8d4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dd8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dd8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd8dc: 0x24a51128  addiu       $a1, $a1, 0x1128
    ctx->pc = 0x4dd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x4dd8e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dd8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd8e4: 0x84830168  lh          $v1, 0x168($a0)
    ctx->pc = 0x4dd8e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x4dd8e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dd8ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd8f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd8f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd8fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd904: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x4dd904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4dd908: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd910: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd918: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4dd918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd91c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd924: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd928: 0x813766a  j           func_4DD9A8
    ctx->pc = 0x4DD928u;
    ctx->pc = 0x4DD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD928u;
    // 0x4dd92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD9A8u;
    goto label_4dd9a8;
    ctx->pc = 0x4DD930u;
label_4dd930:
    // 0x4dd930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd934: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dd934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dd938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd93c: 0x24a51128  addiu       $a1, $a1, 0x1128
    ctx->pc = 0x4dd93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x4dd940: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dd940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd944: 0x84830168  lh          $v1, 0x168($a0)
    ctx->pc = 0x4dd944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x4dd948: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dd948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dd94c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd954: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd958: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd95c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd964: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x4dd964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4dd968: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd96c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd970: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd978: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4dd978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd97c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd984: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd98c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dd98cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd990: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4dd990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4dd994: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dd994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dd998: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd99c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dd99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dd9a0: 0x813766a  j           func_4DD9A8
    ctx->pc = 0x4DD9A0u;
    ctx->pc = 0x4DD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD9A0u;
    // 0x4dd9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD9A8u;
    goto label_4dd9a8;
    ctx->pc = 0x4DD9A8u;
label_4dd9a8:
    // 0x4dd9a8: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dd9a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dd9ac: 0x24980166  addiu       $t8, $a0, 0x166
    ctx->pc = 0x4dd9acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 358));
    // 0x4dd9b0: 0x25cc1120  addiu       $t4, $t6, 0x1120
    ctx->pc = 0x4dd9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4384));
    // 0x4dd9b4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4dd9b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4dd9b8: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x4dd9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd9bc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dd9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd9c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4dd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dd9c4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4dd9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4dd9c8: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4dd9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4dd9cc: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4dd9ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4dd9d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd9d4: 0x8de51140  lw          $a1, 0x1140($t7)
    ctx->pc = 0x4dd9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dd9d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd9dc: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x4dd9dcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd9e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4dd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4dd9e4: 0x94a30166  lhu         $v1, 0x166($a1)
    ctx->pc = 0x4dd9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x4dd9e8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4dd9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd9ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dd9f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd9f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DD9F4u;
    {
        const bool branch_taken_0x4dd9f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD9F4u;
        // 0x4dd9f8: 0x25a61124  addiu       $a2, $t5, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd9f4) {
            ctx->pc = 0x4DDA08u;
            goto label_4dda08;
        }
    }
    ctx->pc = 0x4DD9FCu;
    // 0x4dd9fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dda00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4DDA00u;
    {
        const bool branch_taken_0x4dda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDA00u;
        // 0x4dda04: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dda00) {
            ctx->pc = 0x4DDA10u;
            goto label_4dda10;
        }
    }
    ctx->pc = 0x4DDA08u;
label_4dda08:
    // 0x4dda08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dda08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dda0c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dda0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4dda10:
    // 0x4dda10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4dda10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4dda14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dda14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dda18: 0x24491128  addiu       $t1, $v0, 0x1128
    ctx->pc = 0x4dda18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x4dda1c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dda1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dda20: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4dda20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1128u));
    // 0x4dda24: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x4dda24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda28: 0x95a41124  lhu         $a0, 0x1124($t5)
    ctx->pc = 0x4dda28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4388)));
    // 0x4dda2c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4dda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dda30: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4dda30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4dda34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4dda34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4dda38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dda38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dda3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dda3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dda40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dda40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dda44: 0x85860000  lh          $a2, 0x0($t4)
    ctx->pc = 0x4dda44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dda48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dda48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dda4c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4dda4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dda50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dda50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dda54: 0x8de81140  lw          $t0, 0x1140($t7)
    ctx->pc = 0x4dda54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4416)));
    // 0x4dda58: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4dda58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4dda5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dda5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dda60: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dda60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dda64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dda64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dda68: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dda68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dda6c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dda70: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dda70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dda74: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4dda74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dda78: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dda78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dda7c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dda7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dda80: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4dda80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4dda84: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4dda84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4dda88: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4dda88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4dda8c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4dda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4dda90: 0x95030166  lhu         $v1, 0x166($t0)
    ctx->pc = 0x4dda90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 358)));
    // 0x4dda94: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4dda94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dda98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dda98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dda9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ddaa0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DDAA0u;
    {
        const bool branch_taken_0x4ddaa0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DDAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDAA0u;
        // 0x4ddaa4: 0x348a00ff  ori         $t2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddaa0) {
            ctx->pc = 0x4DDAB0u;
            goto label_4ddab0;
        }
    }
    ctx->pc = 0x4DDAA8u;
    // 0x4ddaa8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ddaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ddaac: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4ddaacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4ddab0:
    // 0x4ddab0: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4ddab0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x4ddab4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4ddab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ddab8: 0x91a31124  lbu         $v1, 0x1124($t5)
    ctx->pc = 0x4ddab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4388)));
    // 0x4ddabc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ddabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ddac0: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x4ddac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ddac4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ddac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ddac8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x4ddac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x4ddacc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ddaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ddad0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4ddad0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4ddad4: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x4ddad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ddad8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DDAD8u;
    {
        const bool branch_taken_0x4ddad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDAD8u;
        // 0x4ddadc: 0x8de41140  lw          $a0, 0x1140($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddad8) {
            ctx->pc = 0x4DDAFCu;
            goto label_4ddafc;
        }
    }
    ctx->pc = 0x4DDAE0u;
    // 0x4ddae0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ddae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ddae4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4ddae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4ddae8: 0x84820166  lh          $v0, 0x166($a0)
    ctx->pc = 0x4ddae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 358)));
    // 0x4ddaec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ddaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ddaf0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ddaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ddaf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ddaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ddaf8: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x4ddaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_4ddafc:
    // 0x4ddafc: 0x95c21120  lhu         $v0, 0x1120($t6)
    ctx->pc = 0x4ddafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4384)));
    // 0x4ddb00: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB00u;
        // 0x4ddb04: 0xa7020000  sh          $v0, 0x0($t8) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDB08u;
}
