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

// Function: sub_004BE5F8
// Address: 0x4be5f8 - 0x4bee20
void sub_004BE5F8_0x4be5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE5F8_0x4be5f8");
#endif

    switch (ctx->pc) {
        case 0x4be5fcu: goto label_4be5fc;
        case 0x4be610u: goto label_4be610;
        case 0x4be624u: goto label_4be624;
        case 0x4be6a0u: goto label_4be6a0;
        case 0x4be7dcu: goto label_4be7dc;
        case 0x4be83cu: goto label_4be83c;
        case 0x4be8c8u: goto label_4be8c8;
        case 0x4be920u: goto label_4be920;
        case 0x4bea08u: goto label_4bea08;
        case 0x4bea1cu: goto label_4bea1c;
        case 0x4bea98u: goto label_4bea98;
        case 0x4beaa0u: goto label_4beaa0;
        case 0x4beaa8u: goto label_4beaa8;
        case 0x4bebd0u: goto label_4bebd0;
        case 0x4bec34u: goto label_4bec34;
        case 0x4bed20u: goto label_4bed20;
        case 0x4bed30u: goto label_4bed30;
        case 0x4bed40u: goto label_4bed40;
        case 0x4bed50u: goto label_4bed50;
        case 0x4bed78u: goto label_4bed78;
        case 0x4bed90u: goto label_4bed90;
        case 0x4beda4u: goto label_4beda4;
        case 0x4bedb8u: goto label_4bedb8;
        case 0x4bedc0u: goto label_4bedc0;
        case 0x4bedc8u: goto label_4bedc8;
        case 0x4bedd0u: goto label_4bedd0;
        case 0x4bedd8u: goto label_4bedd8;
        case 0x4bede8u: goto label_4bede8;
        case 0x4bedf8u: goto label_4bedf8;
        case 0x4bee00u: goto label_4bee00;
        case 0x4bee08u: goto label_4bee08;
        default: break;
    }

    ctx->pc = 0x4be5f8u;

    // 0x4be5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4be5fc:
    // 0x4be5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4be600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be604: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE604u;
        // 0x4be608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE60Cu;
    // 0x4be60c: 0x0  nop
    ctx->pc = 0x4be60cu;
    // NOP
label_4be610:
    // 0x4be610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4be610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4be614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4be614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4be618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4be618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4be61c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BE61Cu;
    SET_GPR_U32(ctx, 31, 0x4BE624u);
    ctx->pc = 0x4BE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE61Cu;
    // 0x4be620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BE61Cu, 0x4BE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE624u;
label_4be624:
    // 0x4be624: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4be624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4be628: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4be628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4be62c: 0x24c60e74  addiu       $a2, $a2, 0xE74
    ctx->pc = 0x4be62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3700));
    // 0x4be630: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4be630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4be634: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4be634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E74u, _value); } while (0);
    // 0x4be638: 0x24e70e6c  addiu       $a3, $a3, 0xE6C
    ctx->pc = 0x4be638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3692));
    // 0x4be63c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4be63cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4be640: 0x240906cd  addiu       $t1, $zero, 0x6CD
    ctx->pc = 0x4be640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1741));
    // 0x4be644: 0x260801bc  addiu       $t0, $s0, 0x1BC
    ctx->pc = 0x4be644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4be648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4be648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be64c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4be64cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4be650: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4be650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be654: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4be654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4be658: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4be658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4be65c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4be65cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4be660: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x4be660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4be664: 0xa4a2015e  sh          $v0, 0x15E($a1)
    ctx->pc = 0x4be664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be668: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4be668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4be66c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4be66cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4be670: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x4be670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4be674: 0xa4a20160  sh          $v0, 0x160($a1)
    ctx->pc = 0x4be674u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be678: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4be678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4be67c: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x4be67cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4be680: 0xa6090160  sh          $t1, 0x160($s0)
    ctx->pc = 0x4be680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 9));
    // 0x4be684: 0xa6050158  sh          $a1, 0x158($s0)
    ctx->pc = 0x4be684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 5));
    // 0x4be688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be68c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4be68cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4be690: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4be690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4be694: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4be694u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be698: 0x812f9a8  j           func_4BE6A0
    ctx->pc = 0x4BE698u;
    ctx->pc = 0x4BE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE698u;
    // 0x4be69c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE6A0u;
    goto label_4be6a0;
    ctx->pc = 0x4BE6A0u;
label_4be6a0:
    // 0x4be6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4be6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4be6a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4be6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4be6a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4be6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4be6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4be6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be6b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4be6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4be6b4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4be6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4be6b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4be6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4be6bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4be6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4be6c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4be6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4be6c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4be6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4be6c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4be6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4be6cc: 0x24750e60  addiu       $s5, $v1, 0xE60
    ctx->pc = 0x4be6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x4be6d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4be6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4be6d4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4be6d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4be6d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4be6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4be6dc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4be6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4be6e0: 0x8c4a0e70  lw          $t2, 0xE70($v0)
    ctx->pc = 0x4be6e0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0E70u));
    // 0x4be6e4: 0x24740e64  addiu       $s4, $v1, 0xE64
    ctx->pc = 0x4be6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3684));
    // 0x4be6e8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4be6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4be6ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4be6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4be6f0: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4be6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4be6f4: 0x24730e68  addiu       $s3, $v1, 0xE68
    ctx->pc = 0x4be6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3688));
    // 0x4be6f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4be6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4be6fc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4be6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E64u));
    // 0x4be700: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4be700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4be704: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4be704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4be708: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4be708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4be70c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4be70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4be710: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4be710u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4be714: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4be714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4be718: 0x24720e5c  addiu       $s2, $v1, 0xE5C
    ctx->pc = 0x4be718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3676));
    // 0x4be71c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4be71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4be720: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4be720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be724: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4be724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4be728: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4be728u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4be72c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be730: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4be730u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be734: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4be734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4be738: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4be738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4be73c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4be73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be740: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4be740u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4be744: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4be744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4be748: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4be748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4be74c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4be74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4be750: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4be750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be754: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4be754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4be758: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be75c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4be75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4be760: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4be760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4be764: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4be764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4be768: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4be768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4be76c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4be76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4be770: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4be770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be774: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4be774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4be778: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be77c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4be77cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4be780: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4be780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4be784: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4be784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4be788: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4be788u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4be78c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4be78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4be790: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4be790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4be794: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be798: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4be798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4be79c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4be79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4be7a0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4be7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4be7a4: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4be7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4be7a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4be7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4be7ac: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4be7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4be7b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be7b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be7b4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4be7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4be7b8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4be7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4be7bc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4be7bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4be7c0: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4be7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4be7c4: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4be7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4be7c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4be7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4be7cc: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4be7ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4be7d0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4be7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4be7d4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BE7D4u;
    SET_GPR_U32(ctx, 31, 0x4BE7DCu);
    ctx->pc = 0x4BE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE7D4u;
    // 0x4be7d8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BE7D4u, 0x4BE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE7DCu;
label_4be7dc:
    // 0x4be7dc: 0x5456000c  bnel        $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4BE7DCu;
    {
        const bool branch_taken_0x4be7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4be7dc) {
            ctx->pc = 0x4BE7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE7DCu;
            // 0x4be7e0: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BE810u;
            goto label_4be810;
        }
    }
    ctx->pc = 0x4BE7E4u;
    // 0x4be7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4be7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be7ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be7ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be7f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4be7f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be7f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4be7f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4be7f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4be7f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be7fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4be7fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4be800: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4be800u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4be804: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4be804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4be808: 0x812fa82  j           func_4BEA08
    ctx->pc = 0x4BE808u;
    ctx->pc = 0x4BE80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE808u;
    // 0x4be80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEA08u;
    goto label_4bea08;
    ctx->pc = 0x4BE810u;
label_4be810:
    // 0x4be810: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4be810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be814: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4be814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4be818: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4be818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4be81c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4be81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4be820: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be824: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be828: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4be828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be82c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4be82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be830: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4be830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be834: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BE834u;
    SET_GPR_U32(ctx, 31, 0x4BE83Cu);
    ctx->pc = 0x4BE838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE834u;
    // 0x4be838: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BE834u, 0x4BE83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE83Cu;
label_4be83c:
    // 0x4be83c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BE83Cu;
    {
        const bool branch_taken_0x4be83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE83Cu;
        // 0x4be840: 0x260501b8  addiu       $a1, $s0, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be83c) {
            ctx->pc = 0x4BE870u;
            goto label_4be870;
        }
    }
    ctx->pc = 0x4BE844u;
    // 0x4be844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4be844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4be850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4be854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4be858: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4be858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be85c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4be85cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4be860: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4be860u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4be864: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4be864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4be868: 0x812fa82  j           func_4BEA08
    ctx->pc = 0x4BE868u;
    ctx->pc = 0x4BE86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE868u;
    // 0x4be86c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEA08u;
    goto label_4bea08;
    ctx->pc = 0x4BE870u;
label_4be870:
    // 0x4be870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4be870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4be874: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4be874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4be878: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4be878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4be87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4be87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be884: 0xa6030164  sh          $v1, 0x164($s0)
    ctx->pc = 0x4be884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4be888: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4be888u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be88c: 0xa616002e  sh          $s6, 0x2E($s0)
    ctx->pc = 0x4be88cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 22));
    // 0x4be890: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4be890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4be894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4be894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be898: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4be898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4be89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be8a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4be8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4be8a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4be8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4be8a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4be8a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be8ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4be8acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4be8b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4be8b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4be8b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4be8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4be8b8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4be8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be8bc: 0x812fa32  j           func_4BE8C8
    ctx->pc = 0x4BE8BCu;
    ctx->pc = 0x4BE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE8BCu;
    // 0x4be8c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE8C8u;
    goto label_4be8c8;
    ctx->pc = 0x4BE8C4u;
    // 0x4be8c4: 0x0  nop
    ctx->pc = 0x4be8c4u;
    // NOP
label_4be8c8:
    // 0x4be8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4be8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4be8cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4be8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4be8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4be8d4: 0x24450162  addiu       $a1, $v0, 0x162
    ctx->pc = 0x4be8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 354));
    // 0x4be8d8: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4be8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4be8dc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4be8dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4be8e0: 0x24630600  addiu       $v1, $v1, 0x600
    ctx->pc = 0x4be8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
    // 0x4be8e4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4be8e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BE8E8u;
    {
        const bool branch_taken_0x4be8e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE8E8u;
        // 0x4be8ec: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be8e8) {
            ctx->pc = 0x4BE900u;
            goto label_4be900;
        }
    }
    ctx->pc = 0x4BE8F0u;
    // 0x4be8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be8f4: 0x812fa82  j           func_4BEA08
    ctx->pc = 0x4BE8F4u;
    ctx->pc = 0x4BE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE8F4u;
    // 0x4be8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEA08u;
    goto label_4bea08;
    ctx->pc = 0x4BE8FCu;
    // 0x4be8fc: 0x0  nop
    ctx->pc = 0x4be8fcu;
    // NOP
label_4be900:
    // 0x4be900: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4be900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4be904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be908: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4be908u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4be90c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4be90cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4be910: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4be910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4be914: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4be914u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be918: 0x812fa48  j           func_4BE920
    ctx->pc = 0x4BE918u;
    ctx->pc = 0x4BE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE918u;
    // 0x4be91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE920u;
    goto label_4be920;
    ctx->pc = 0x4BE920u;
label_4be920:
    // 0x4be920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4be920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4be924: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4be924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4be928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4be928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4be92c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4be92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be930: 0x24490e58  addiu       $t1, $v0, 0xE58
    ctx->pc = 0x4be930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 3672));
    // 0x4be934: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4be934u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4be938: 0x8503015a  lh          $v1, 0x15A($t0)
    ctx->pc = 0x4be938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 346)));
    // 0x4be93c: 0x250b01b6  addiu       $t3, $t0, 0x1B6
    ctx->pc = 0x4be93cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 438));
    // 0x4be940: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4be940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4be944: 0x250c0118  addiu       $t4, $t0, 0x118
    ctx->pc = 0x4be944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 280));
    // 0x4be948: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4be948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4be94c: 0x250d011c  addiu       $t5, $t0, 0x11C
    ctx->pc = 0x4be94cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 284));
    // 0x4be950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be954: 0x250f0120  addiu       $t7, $t0, 0x120
    ctx->pc = 0x4be954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x4be958: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be95c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4be95cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4be960: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4be960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be964: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4be964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4be968: 0x8502015c  lh          $v0, 0x15C($t0)
    ctx->pc = 0x4be968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 348)));
    // 0x4be96c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BE96Cu;
    {
        const bool branch_taken_0x4be96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE96Cu;
        // 0x4be970: 0x250e01bc  addiu       $t6, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be96c) {
            ctx->pc = 0x4BE980u;
            goto label_4be980;
        }
    }
    ctx->pc = 0x4BE974u;
    // 0x4be974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be978: 0x812fa82  j           func_4BEA08
    ctx->pc = 0x4BE978u;
    ctx->pc = 0x4BE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE978u;
    // 0x4be97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEA08u;
    goto label_4bea08;
    ctx->pc = 0x4BE980u;
label_4be980:
    // 0x4be980: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4be980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4be984: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x4be984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x4be988: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4be988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4be98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be990: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4be990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4be994: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4be994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4be998: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4be998u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4be99c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4be99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be9a0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4be9a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4be9a4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4be9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4be9a8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4be9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4be9ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4be9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4be9b0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4be9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4be9b4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4be9b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4be9b8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4be9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be9bc: 0xa506015e  sh          $a2, 0x15E($t0)
    ctx->pc = 0x4be9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4be9c0: 0x95020164  lhu         $v0, 0x164($t0)
    ctx->pc = 0x4be9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 356)));
    // 0x4be9c4: 0xa507002e  sh          $a3, 0x2E($t0)
    ctx->pc = 0x4be9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 46), (uint16_t)GPR_U32(ctx, 7));
    // 0x4be9c8: 0xa50201b8  sh          $v0, 0x1B8($t0)
    ctx->pc = 0x4be9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be9cc: 0xa5000162  sh          $zero, 0x162($t0)
    ctx->pc = 0x4be9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4be9d0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4be9d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4be9d4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4be9d8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4be9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be9dc: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4be9dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4be9e0: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x4be9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x4be9e4: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x4be9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4be9e8: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4be9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4be9ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4be9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4be9f0: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4be9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be9f4: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4be9f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4be9f8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4be9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4be9fc: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x4be9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bea00: 0x812fa82  j           func_4BEA08
    ctx->pc = 0x4BEA00u;
    ctx->pc = 0x4BEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEA00u;
    // 0x4bea04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEA08u;
    goto label_4bea08;
    ctx->pc = 0x4BEA08u;
label_4bea08:
    // 0x4bea08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bea0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bea10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bea14: 0xc12564a  jal         func_495928
    ctx->pc = 0x4BEA14u;
    SET_GPR_U32(ctx, 31, 0x4BEA1Cu);
    ctx->pc = 0x4BEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEA14u;
    // 0x4bea18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4BEA14u, 0x4BEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEA1Cu;
label_4bea1c:
    // 0x4bea1c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bea20: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bea20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bea24: 0x24690e60  addiu       $t1, $v1, 0xE60
    ctx->pc = 0x4bea24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x4bea28: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bea2c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bea2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bea30: 0x246a0e64  addiu       $t2, $v1, 0xE64
    ctx->pc = 0x4bea30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 3684));
    // 0x4bea34: 0x248b0e68  addiu       $t3, $a0, 0xE68
    ctx->pc = 0x4bea34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3688));
    // 0x4bea38: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4BEA38u;
    {
        const bool branch_taken_0x4bea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEA38u;
        // 0x4bea3c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bea38) {
            ctx->pc = 0x4BEAC0u;
            goto label_4beac0;
        }
    }
    ctx->pc = 0x4BEA40u;
    // 0x4bea40: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bea44: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4bea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bea48: 0x8c460e6c  lw          $a2, 0xE6C($v0)
    ctx->pc = 0x4bea48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bea4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bea4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bea50: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4bea50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bea54: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x4bea54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x4bea58: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4bea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bea5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bea5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bea60: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bea64: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bea64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bea68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bea6c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4bea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4bea70: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x4bea70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4bea74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bea78: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bea7c: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4bea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4bea80: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x4bea80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x4bea84: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bea88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bea8c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bea90: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4BEA90u;
    SET_GPR_U32(ctx, 31, 0x4BEA98u);
    ctx->pc = 0x4BEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEA90u;
    // 0x4bea94: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4BEA90u, 0x4BEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEA98u;
label_4bea98:
    // 0x4bea98: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4BEA98u;
    SET_GPR_U32(ctx, 31, 0x4BEAA0u);
    ctx->pc = 0x4BEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEA98u;
    // 0x4bea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4BEA98u, 0x4BEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEAA0u;
label_4beaa0:
    // 0x4beaa0: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4BEAA0u;
    SET_GPR_U32(ctx, 31, 0x4BEAA8u);
    ctx->pc = 0x4BEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEAA0u;
    // 0x4beaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4BEAA0u, 0x4BEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEAA8u;
label_4beaa8:
    // 0x4beaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4beaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beaac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4beaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4beab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4beab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4beab4: 0x812fab4  j           func_4BEAD0
    ctx->pc = 0x4BEAB4u;
    ctx->pc = 0x4BEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEAB4u;
    // 0x4beab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEAD0u;
    goto label_4bead0;
    ctx->pc = 0x4BEABCu;
    // 0x4beabc: 0x0  nop
    ctx->pc = 0x4beabcu;
    // NOP
label_4beac0:
    // 0x4beac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4beac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4beac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4beac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4beac8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEAC8u;
        // 0x4beacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEAD0u;
label_4bead0:
    // 0x4bead0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bead4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bead4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bead8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4beadc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4beadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4beae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4beae4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4beae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4beae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4beae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4beaec: 0x26650e58  addiu       $a1, $s3, 0xE58
    ctx->pc = 0x4beaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3672));
    // 0x4beaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4beaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4beaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4beaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4beaf8: 0x862201bc  lh          $v0, 0x1BC($s1)
    ctx->pc = 0x4beaf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4beafc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4beafcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4beb00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4beb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4beb04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4beb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4beb08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4beb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4beb0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4beb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4beb10: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4beb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4beb14: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x4beb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4beb18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4BEB18u;
    {
        const bool branch_taken_0x4beb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEB18u;
        // 0x4beb1c: 0x26320118  addiu       $s2, $s1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beb18) {
            ctx->pc = 0x4BEBD8u;
            goto label_4bebd8;
        }
    }
    ctx->pc = 0x4BEB20u;
    // 0x4beb20: 0x2623014a  addiu       $v1, $s1, 0x14A
    ctx->pc = 0x4beb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
    // 0x4beb24: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4beb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4beb28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4beb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4beb2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4beb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4beb30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4beb34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4beb34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4beb38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4beb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4beb3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4beb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4beb40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4beb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4beb44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4beb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4beb48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4beb48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4beb4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4beb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4beb50: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4beb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4beb54: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4beb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4beb58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4beb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4beb5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4beb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4beb60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4beb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4beb64: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4beb64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4beb68: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4BEB68u;
    {
        const bool branch_taken_0x4beb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEB68u;
        // 0x4beb6c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beb68) {
            ctx->pc = 0x4BEBDCu;
            goto label_4bebdc;
        }
    }
    ctx->pc = 0x4BEB70u;
    // 0x4beb70: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4beb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4beb74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4beb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4beb78: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4beb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4beb7c: 0x26320118  addiu       $s2, $s1, 0x118
    ctx->pc = 0x4beb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4beb80: 0xa4a32330  sh          $v1, 0x2330($a1)
    ctx->pc = 0x4beb80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4beb84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4beb88: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4beb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4beb8c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4beb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4beb90: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4beb90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4beb94: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4beb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4beb98: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4beb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4beb9c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4beb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4beba0: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4beba0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4beba4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4beba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4beba8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4beba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4bebac: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4bebacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4bebb0: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4bebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bebb4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4bebb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bebb8: 0xa4a3233a  sh          $v1, 0x233A($a1)
    ctx->pc = 0x4bebb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bebbc: 0x9622011c  lhu         $v0, 0x11C($s1)
    ctx->pc = 0x4bebbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4bebc0: 0xa4a2233c  sh          $v0, 0x233C($a1)
    ctx->pc = 0x4bebc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bebc4: 0x96230120  lhu         $v1, 0x120($s1)
    ctx->pc = 0x4bebc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4bebc8: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4BEBC8u;
    SET_GPR_U32(ctx, 31, 0x4BEBD0u);
    ctx->pc = 0x4BEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEBC8u;
    // 0x4bebcc: 0xa4a3233e  sh          $v1, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4BEBC8u, 0x4BEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEBD0u;
label_4bebd0:
    // 0x4bebd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BEBD0u;
    {
        const bool branch_taken_0x4bebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEBD0u;
        // 0x4bebd4: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bebd0) {
            ctx->pc = 0x4BEBDCu;
            goto label_4bebdc;
        }
    }
    ctx->pc = 0x4BEBD8u;
label_4bebd8:
    // 0x4bebd8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4bebdc:
    // 0x4bebdc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bebe0: 0x8c490e6c  lw          $t1, 0xE6C($v0)
    ctx->pc = 0x4bebe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3692)));
    // 0x4bebe4: 0x24840e60  addiu       $a0, $a0, 0xE60
    ctx->pc = 0x4bebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3680));
    // 0x4bebe8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4bebec: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4bebecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4bebf0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4bebf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bebf4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4bebf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4bebf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bebfc: 0x25080e64  addiu       $t0, $t0, 0xE64
    ctx->pc = 0x4bebfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3684));
    // 0x4bec00: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bec04: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4bec04u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0E64u));
    // 0x4bec08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bec08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bec0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bec10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bec14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bec18: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bec18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bec1c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4bec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bec20: 0x85220004  lh          $v0, 0x4($t1)
    ctx->pc = 0x4bec20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4bec24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bec28: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bec28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bec2c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4BEC2Cu;
    SET_GPR_U32(ctx, 31, 0x4BEC34u);
    ctx->pc = 0x4BEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC2Cu;
    // 0x4bec30: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4BEC2Cu, 0x4BEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC34u;
label_4bec34:
    // 0x4bec34: 0x26640e58  addiu       $a0, $s3, 0xE58
    ctx->pc = 0x4bec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3672));
    // 0x4bec38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bec3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4bec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bec40: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4bec40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bec44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bec48: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bec4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bec4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bec50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bec50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bec54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bec58: 0x84930000  lh          $s3, 0x0($a0)
    ctx->pc = 0x4bec58u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bec5c: 0x86220162  lh          $v0, 0x162($s1)
    ctx->pc = 0x4bec5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x4bec60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4bec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4bec64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bec68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bec6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bec70: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bec70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bec74: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4bec74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bec78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bec7c: 0x8622015e  lh          $v0, 0x15E($s1)
    ctx->pc = 0x4bec7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x4bec80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bec84: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bec88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bec8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bec90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bec94: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bec94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bec98: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4bec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4bec9c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4beca0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4beca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4beca4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4beca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4beca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4beca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4becac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4becacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4becb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4becb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4becb4: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4becb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4becb8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4becb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4becbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4becbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4becc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4becc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4becc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4becc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4becc8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4becc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4beccc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4becccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4becd0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4becd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4becd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4becd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4becd8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4becd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4becdc: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x4becdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bece0: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BECE0u;
    {
        const bool branch_taken_0x4bece0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BECE0u;
        // 0x4bece4: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bece0) {
            ctx->pc = 0x4BED28u;
            goto label_4bed28;
        }
    }
    ctx->pc = 0x4BECE8u;
    // 0x4bece8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BECE8u;
    {
        const bool branch_taken_0x4bece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bece8) {
            ctx->pc = 0x4BECECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BECE8u;
            // 0x4becec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BED00u;
            goto label_4bed00;
        }
    }
    ctx->pc = 0x4BECF0u;
    // 0x4becf0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BECF0u;
    {
        const bool branch_taken_0x4becf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4becf0) {
            ctx->pc = 0x4BED18u;
            goto label_4bed18;
        }
    }
    ctx->pc = 0x4BECF8u;
    // 0x4becf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4BECF8u;
    {
        const bool branch_taken_0x4becf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BECF8u;
        // 0x4becfc: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4becf8) {
            ctx->pc = 0x4BED54u;
            goto label_4bed54;
        }
    }
    ctx->pc = 0x4BED00u;
label_4bed00:
    // 0x4bed00: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BED00u;
    {
        const bool branch_taken_0x4bed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED00u;
        // 0x4bed04: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed00) {
            ctx->pc = 0x4BED38u;
            goto label_4bed38;
        }
    }
    ctx->pc = 0x4BED08u;
    // 0x4bed08: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BED08u;
    {
        const bool branch_taken_0x4bed08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bed08) {
            ctx->pc = 0x4BED48u;
            goto label_4bed48;
        }
    }
    ctx->pc = 0x4BED10u;
    // 0x4bed10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4BED10u;
    {
        const bool branch_taken_0x4bed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED10u;
        // 0x4bed14: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed10) {
            ctx->pc = 0x4BED54u;
            goto label_4bed54;
        }
    }
    ctx->pc = 0x4BED18u;
label_4bed18:
    // 0x4bed18: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BED18u;
    SET_GPR_U32(ctx, 31, 0x4BED20u);
    ctx->pc = 0x4BED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED18u;
    // 0x4bed1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BED18u, 0x4BED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED20u;
label_4bed20:
    // 0x4bed20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BED20u;
    {
        const bool branch_taken_0x4bed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED20u;
        // 0x4bed24: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed20) {
            ctx->pc = 0x4BED54u;
            goto label_4bed54;
        }
    }
    ctx->pc = 0x4BED28u;
label_4bed28:
    // 0x4bed28: 0xc127ea6  jal         func_49FA98
    ctx->pc = 0x4BED28u;
    SET_GPR_U32(ctx, 31, 0x4BED30u);
    ctx->pc = 0x4BED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED28u;
    // 0x4bed2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA98u, 0x4BED28u, 0x4BED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED30u;
label_4bed30:
    // 0x4bed30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BED30u;
    {
        const bool branch_taken_0x4bed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED30u;
        // 0x4bed34: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed30) {
            ctx->pc = 0x4BED54u;
            goto label_4bed54;
        }
    }
    ctx->pc = 0x4BED38u;
label_4bed38:
    // 0x4bed38: 0xc127ef0  jal         func_49FBC0
    ctx->pc = 0x4BED38u;
    SET_GPR_U32(ctx, 31, 0x4BED40u);
    ctx->pc = 0x4BED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED38u;
    // 0x4bed3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FBC0u, 0x4BED38u, 0x4BED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED40u;
label_4bed40:
    // 0x4bed40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BED40u;
    {
        const bool branch_taken_0x4bed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED40u;
        // 0x4bed44: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed40) {
            ctx->pc = 0x4BED54u;
            goto label_4bed54;
        }
    }
    ctx->pc = 0x4BED48u;
label_4bed48:
    // 0x4bed48: 0xc127f40  jal         func_49FD00
    ctx->pc = 0x4BED48u;
    SET_GPR_U32(ctx, 31, 0x4BED50u);
    ctx->pc = 0x4BED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED48u;
    // 0x4bed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x4BED48u, 0x4BED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED50u;
label_4bed50:
    // 0x4bed50: 0xa6530000  sh          $s3, 0x0($s2)
    ctx->pc = 0x4bed50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
label_4bed54:
    // 0x4bed54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bed58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bed58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bed5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bed5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bed60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bed60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bed64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bed64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bed68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bed6c: 0x812fb5e  j           func_4BED78
    ctx->pc = 0x4BED6Cu;
    ctx->pc = 0x4BED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED6Cu;
    // 0x4bed70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BED78u;
    goto label_4bed78;
    ctx->pc = 0x4BED74u;
    // 0x4bed74: 0x0  nop
    ctx->pc = 0x4bed74u;
    // NOP
label_4bed78:
    // 0x4bed78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bed7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bed80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bed84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bed88: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BED88u;
    SET_GPR_U32(ctx, 31, 0x4BED90u);
    ctx->pc = 0x4BED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED88u;
    // 0x4bed8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BED88u, 0x4BED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED90u;
label_4bed90:
    // 0x4bed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bed94: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4BED94u;
    {
        const bool branch_taken_0x4bed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BED94u;
        // 0x4bed98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed94) {
            ctx->pc = 0x4BEE08u;
            goto label_4bee08;
        }
    }
    ctx->pc = 0x4BED9Cu;
    // 0x4bed9c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BED9Cu;
    SET_GPR_U32(ctx, 31, 0x4BEDA4u);
    ctx->pc = 0x4BEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED9Cu;
    // 0x4beda0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BED9Cu, 0x4BEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDA4u;
label_4beda4:
    // 0x4beda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4beda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beda8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4BEDA8u;
    {
        const bool branch_taken_0x4beda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4BEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEDA8u;
        // 0x4bedac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beda8) {
            ctx->pc = 0x4BEDE0u;
            goto label_4bede0;
        }
    }
    ctx->pc = 0x4BEDB0u;
    // 0x4bedb0: 0xc12ff70  jal         func_4BFDC0
    ctx->pc = 0x4BEDB0u;
    SET_GPR_U32(ctx, 31, 0x4BEDB8u);
    ctx->pc = 0x4BFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BFDC0u, 0x4BEDB0u, 0x4BEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDB8u;
label_4bedb8:
    // 0x4bedb8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BEDB8u;
    SET_GPR_U32(ctx, 31, 0x4BEDC0u);
    ctx->pc = 0x4BEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDB8u;
    // 0x4bedbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BEDB8u, 0x4BEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDC0u;
label_4bedc0:
    // 0x4bedc0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BEDC0u;
    SET_GPR_U32(ctx, 31, 0x4BEDC8u);
    ctx->pc = 0x4BEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDC0u;
    // 0x4bedc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BEDC0u, 0x4BEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDC8u;
label_4bedc8:
    // 0x4bedc8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BEDC8u;
    SET_GPR_U32(ctx, 31, 0x4BEDD0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BEDC8u, 0x4BEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDD0u;
label_4bedd0:
    // 0x4bedd0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BEDD0u;
    SET_GPR_U32(ctx, 31, 0x4BEDD8u);
    ctx->pc = 0x4BEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDD0u;
    // 0x4bedd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BEDD0u, 0x4BEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDD8u;
label_4bedd8:
    // 0x4bedd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BEDD8u;
    {
        const bool branch_taken_0x4bedd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEDD8u;
        // 0x4beddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bedd8) {
            ctx->pc = 0x4BEE0Cu;
            goto label_4bee0c;
        }
    }
    ctx->pc = 0x4BEDE0u;
label_4bede0:
    // 0x4bede0: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4BEDE0u;
    SET_GPR_U32(ctx, 31, 0x4BEDE8u);
    ctx->pc = 0x4BEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDE0u;
    // 0x4bede4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4BEDE0u, 0x4BEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDE8u;
label_4bede8:
    // 0x4bede8: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BEDE8u;
    {
        const bool branch_taken_0x4bede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4BEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEDE8u;
        // 0x4bedec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bede8) {
            ctx->pc = 0x4BEE08u;
            goto label_4bee08;
        }
    }
    ctx->pc = 0x4BEDF0u;
    // 0x4bedf0: 0xc12ff70  jal         func_4BFDC0
    ctx->pc = 0x4BEDF0u;
    SET_GPR_U32(ctx, 31, 0x4BEDF8u);
    ctx->pc = 0x4BFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BFDC0u, 0x4BEDF0u, 0x4BEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDF8u;
label_4bedf8:
    // 0x4bedf8: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4BEDF8u;
    SET_GPR_U32(ctx, 31, 0x4BEE00u);
    ctx->pc = 0x4BEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDF8u;
    // 0x4bedfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4BEDF8u, 0x4BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE00u;
label_4bee00:
    // 0x4bee00: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BEE00u;
    SET_GPR_U32(ctx, 31, 0x4BEE08u);
    ctx->pc = 0x4BEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE00u;
    // 0x4bee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BEE00u, 0x4BEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE08u;
label_4bee08:
    // 0x4bee08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bee08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bee0c:
    // 0x4bee0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bee0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bee10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bee14: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE14u;
        // 0x4bee18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEE1Cu;
    // 0x4bee1c: 0x0  nop
    ctx->pc = 0x4bee1cu;
    // NOP
    ctx->pc = 0x4bee20u;
}
