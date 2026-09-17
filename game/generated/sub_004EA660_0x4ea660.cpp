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

// Function: sub_004EA660
// Address: 0x4ea660 - 0x4ea7d8
void sub_004EA660_0x4ea660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA660_0x4ea660");
#endif

    switch (ctx->pc) {
        case 0x4ea788u: goto label_4ea788;
        default: break;
    }

    ctx->pc = 0x4ea660u;

    // 0x4ea660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ea660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ea664: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ea664u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ea668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ea668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ea66c: 0x25ad11f4  addiu       $t5, $t5, 0x11F4
    ctx->pc = 0x4ea66cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4596));
    // 0x4ea670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ea670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ea674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ea674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ea678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ea67c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ea67cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea680: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ea680u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ea684: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4ea684u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4ea688: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x4ea688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4ea68c: 0x25ce11f8  addiu       $t6, $t6, 0x11F8
    ctx->pc = 0x4ea68cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4600));
    // 0x4ea690: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4ea690u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ea694: 0x25ef11fc  addiu       $t7, $t7, 0x11FC
    ctx->pc = 0x4ea694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4604));
    // 0x4ea698: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea69c: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4ea69cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ea6a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ea6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ea6a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ea6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ea6a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ea6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ea6ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ea6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ea6b0: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4ea6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4ea6b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ea6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ea6b8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ea6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ea6bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4ea6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4ea6c0: 0x258c11ec  addiu       $t4, $t4, 0x11EC
    ctx->pc = 0x4ea6c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4588));
    // 0x4ea6c4: 0x8c70120c  lw          $s0, 0x120C($v1)
    ctx->pc = 0x4ea6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4620)));
    // 0x4ea6c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ea6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea6cc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ea6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ea6d0: 0x8de80000  lw          $t0, 0x0($t7)
    ctx->pc = 0x4ea6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ea6d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea6d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea6d8: 0x85ab0000  lh          $t3, 0x0($t5)
    ctx->pc = 0x4ea6d8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ea6dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea6e0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ea6e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ea6e4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ea6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ea6e8: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x4ea6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x4ea6ec: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4ea6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4ea6f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ea6f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ea6f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4ea6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4ea6f8: 0x85ca0000  lh          $t2, 0x0($t6)
    ctx->pc = 0x4ea6f8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ea6fc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ea6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ea700: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4ea700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ea704: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea708: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea70c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ea70cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ea710: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ea710u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4ea714: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4ea714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4ea718: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x4ea718u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x4ea71c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ea71cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ea720: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4ea720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea728: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x4ea728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ea72c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ea72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ea730: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea734: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4ea734u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4ea738: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x4ea738u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x4ea73c: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4ea73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4ea740: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4ea740u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4ea744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4ea744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ea748: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ea748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ea74c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea74cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea750: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4ea750u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ea754: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4ea754u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4ea758: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4ea758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4ea75c: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4ea75cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4ea760: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4ea764: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4ea764u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4ea768: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ea768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ea76c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea770: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ea774: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ea774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ea778: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ea778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ea77c: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x4ea77cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x4ea780: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4EA780u;
    SET_GPR_U32(ctx, 31, 0x4EA788u);
    ctx->pc = 0x4EA784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA780u;
    // 0x4ea784: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4EA780u, 0x4EA788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA788u;
label_4ea788:
    // 0x4ea788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ea788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea78c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EA78Cu;
    {
        const bool branch_taken_0x4ea78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA78Cu;
        // 0x4ea790: 0x262301bc  addiu       $v1, $s1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea78c) {
            ctx->pc = 0x4EA7A8u;
            goto label_4ea7a8;
        }
    }
    ctx->pc = 0x4EA794u;
    // 0x4ea794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea79c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ea79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea7a0: 0x813ab16  j           func_4EAC58
    ctx->pc = 0x4EA7A0u;
    ctx->pc = 0x4EA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA7A0u;
    // 0x4ea7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    sub_004EAC58_0x4eac58(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA7A8u;
label_4ea7a8:
    // 0x4ea7a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ea7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ea7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ea7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea7b0: 0xa6220166  sh          $v0, 0x166($s1)
    ctx->pc = 0x4ea7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea7b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ea7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ea7bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea7c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ea7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea7c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea7c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ea7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea7cc: 0x813a9f6  j           func_4EA7D8
    ctx->pc = 0x4EA7CCu;
    ctx->pc = 0x4EA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA7CCu;
    // 0x4ea7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA7D8u;
    sub_004EA7D8_0x4ea7d8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA7D4u;
    // 0x4ea7d4: 0x0  nop
    ctx->pc = 0x4ea7d4u;
    // NOP
    ctx->pc = 0x4ea7d8u;
}
