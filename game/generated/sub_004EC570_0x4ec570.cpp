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

// Function: sub_004EC570
// Address: 0x4ec570 - 0x4ecd58
void sub_004EC570_0x4ec570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC570_0x4ec570");
#endif

    switch (ctx->pc) {
        case 0x4ec7fcu: goto label_4ec7fc;
        case 0x4ec954u: goto label_4ec954;
        case 0x4ec95cu: goto label_4ec95c;
        case 0x4ec974u: goto label_4ec974;
        case 0x4eca0cu: goto label_4eca0c;
        case 0x4eca14u: goto label_4eca14;
        case 0x4eca28u: goto label_4eca28;
        case 0x4eca54u: goto label_4eca54;
        case 0x4eca5cu: goto label_4eca5c;
        case 0x4ecadcu: goto label_4ecadc;
        case 0x4ecafcu: goto label_4ecafc;
        case 0x4ecb04u: goto label_4ecb04;
        default: break;
    }

    ctx->pc = 0x4ec570u;

    // 0x4ec570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ec570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ec574: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ec574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ec578: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ec578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ec57c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ec57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ec580: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ec580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ec584: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ec584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ec588: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4ec588u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4ec58c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4ec58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4ec590: 0x24b311ec  addiu       $s3, $a1, 0x11EC
    ctx->pc = 0x4ec590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4588));
    // 0x4ec594: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4ec594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4ec598: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ec598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ec59c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4ec59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4ec5a0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ec5a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ec5a4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4ec5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4ec5a8: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ec5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4ec5ac: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4ec5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4ec5b0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ec5b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec5b4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4ec5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4ec5b8: 0x26d61204  addiu       $s6, $s6, 0x1204
    ctx->pc = 0x4ec5b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4612));
    // 0x4ec5bc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4ec5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4ec5c0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ec5c4: 0x249011e8  addiu       $s0, $a0, 0x11E8
    ctx->pc = 0x4ec5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
    // 0x4ec5c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ec5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ec5cc: 0x86e301be  lh          $v1, 0x1BE($s7)
    ctx->pc = 0x4ec5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 446)));
    // 0x4ec5d0: 0x24be11f4  addiu       $fp, $a1, 0x11F4
    ctx->pc = 0x4ec5d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4596));
    // 0x4ec5d4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1204u));
    // 0x4ec5d8: 0x269411f8  addiu       $s4, $s4, 0x11F8
    ctx->pc = 0x4ec5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x4ec5dc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec5e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ec5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ec5e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec5e8: 0x26b511fc  addiu       $s5, $s5, 0x11FC
    ctx->pc = 0x4ec5e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4604));
    // 0x4ec5ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ec5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ec5f0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4ec5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4ec5f4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4ec5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4ec5f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec5fc: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4ec5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4ec600: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4ec600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ec604: 0x264d2494  addiu       $t5, $s2, 0x2494
    ctx->pc = 0x4ec604u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 9364));
    // 0x4ec608: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4ec608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec60c: 0x264c2498  addiu       $t4, $s2, 0x2498
    ctx->pc = 0x4ec60cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 9368));
    // 0x4ec610: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4ec610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4ec614: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x4ec614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ec618: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec61c: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4ec61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4ec620: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ec620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ec624: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ec624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ec628: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x4ec628u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ec62c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4ec62cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4ec630: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4ec630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4ec634: 0x264b249c  addiu       $t3, $s2, 0x249C
    ctx->pc = 0x4ec634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 9372));
    // 0x4ec638: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ec638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ec63c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ec63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ec640: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec644: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4ec644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec648: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4ec648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4ec64c: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4ec64cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec650: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec654: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ec654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ec658: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ec658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ec65c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ec65cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ec660: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ec660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ec664: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x4ec664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ec668: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4ec668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4ec66c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ec66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec670: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4ec670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4ec674: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4ec674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4ec678: 0x26e60158  addiu       $a2, $s7, 0x158
    ctx->pc = 0x4ec678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 344));
    // 0x4ec67c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec680: 0x26e4015c  addiu       $a0, $s7, 0x15C
    ctx->pc = 0x4ec680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 348));
    // 0x4ec684: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec688: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4ec688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec68c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ec68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ec690: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ec690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ec694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ec694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ec698: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4ec698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4ec69c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ec69cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec6a0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4ec6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4ec6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ec6a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec6ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ec6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ec6b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ec6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ec6b4: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4ec6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4ec6b8: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4ec6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4ec6bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec6c0: 0x34aaffff  ori         $t2, $a1, 0xFFFF
    ctx->pc = 0x4ec6c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ec6c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec6c8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ec6c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ec6cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec6d0: 0x3c0e0054  lui         $t6, 0x54
    ctx->pc = 0x4ec6d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)84 << 16));
    // 0x4ec6d4: 0x25ce7fb8  addiu       $t6, $t6, 0x7FB8
    ctx->pc = 0x4ec6d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32696));
    // 0x4ec6d8: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x4ec6d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4ec6dc: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4ec6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ec6e0: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x4ec6e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x4ec6e4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec6e8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ec6e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ec6ec: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4ec6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x4ec6f0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ec6f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ec6f4: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4ec6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ec6f8: 0x87c60000  lh          $a2, 0x0($fp)
    ctx->pc = 0x4ec6f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ec6fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec700: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ec700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ec704: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4ec704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4ec708: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ec708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ec70c: 0x85c20002  lh          $v0, 0x2($t6)
    ctx->pc = 0x4ec70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x4ec710: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ec710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ec714: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec718: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ec718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec71c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ec71cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ec720: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4ec720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec724: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ec728: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4ec728u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4ec72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ec730: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ec730u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ec734: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec738: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec73c: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4ec73cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4ec740: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x4ec740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x4ec744: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec74c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ec74cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ec750: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec754: 0x3c0e0055  lui         $t6, 0x55
    ctx->pc = 0x4ec754u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)85 << 16));
    // 0x4ec758: 0x25ce80a8  addiu       $t6, $t6, -0x7F58
    ctx->pc = 0x4ec758u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294934696));
    // 0x4ec75c: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x4ec75cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4ec760: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4ec760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ec764: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x4ec764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x4ec768: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4ec768u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4ec76c: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4ec76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4ec770: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4ec770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4ec774: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4ec774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x4ec778: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4ec778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ec77c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4ec77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ec780: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ec780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ec784: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4ec784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4ec788: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4ec788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4ec78c: 0x85c30002  lh          $v1, 0x2($t6)
    ctx->pc = 0x4ec78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x4ec790: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4ec790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec794: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4ec794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec798: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ec798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ec79c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4ec79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec7a0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec7a4: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x4ec7a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ec7a8: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ec7a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ec7ac: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4ec7acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec7b0: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4ec7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4ec7b4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ec7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ec7b8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4ec7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ec7bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ec7bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ec7c0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4ec7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec7c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ec7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ec7c8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4ec7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ec7cc: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4ec7ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4ec7d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec7d4: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ec7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ec7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec7dc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec7e0: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4ec7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4ec7e4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ec7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ec7e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec7ec: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4ec7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4ec7f0: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4ec7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4ec7f4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4EC7F4u;
    SET_GPR_U32(ctx, 31, 0x4EC7FCu);
    ctx->pc = 0x4EC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC7F4u;
    // 0x4ec7f8: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4EC7F4u, 0x4EC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC7FCu;
label_4ec7fc:
    // 0x4ec7fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec800: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4ec800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ec804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec808: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec80c: 0x864724a0  lh          $a3, 0x24A0($s2)
    ctx->pc = 0x4ec80cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4ec810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ec810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ec814: 0x864624a2  lh          $a2, 0x24A2($s2)
    ctx->pc = 0x4ec814u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4ec818: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec81c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec820: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4ec820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4ec824: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4ec824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4ec828: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ec828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec82c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ec82cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ec830: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ec830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec834: 0x26521200  addiu       $s2, $s2, 0x1200
    ctx->pc = 0x4ec834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4608));
    // 0x4ec838: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ec838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4ec83c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ec83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ec840: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec844: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ec844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ec848: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ec848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ec84c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ec84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ec850: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec854: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec858: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ec858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ec85c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ec85cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec860: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec864: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ec864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ec868: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4ec868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec86c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4ec86cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4ec870: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4ec870u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec874: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ec874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ec878: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4ec878u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ec87c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ec87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ec880: 0x24c611f0  addiu       $a2, $a2, 0x11F0
    ctx->pc = 0x4ec880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4592));
    // 0x4ec884: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4ec884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ec888: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ec888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec88c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ec88cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec890: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4ec890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x4ec894: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4ec894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ec898: 0x84a580d2  lh          $a1, -0x7F2E($a1)
    ctx->pc = 0x4ec898u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294934738)));
    // 0x4ec89c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4ec89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ec8a0: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ec8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ec8a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11F0u));
    // 0x4ec8a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec8ac: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4ec8acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec8b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ec8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ec8b4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ec8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ec8b8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4ec8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4ec8bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec8c0: 0x24a511f0  addiu       $a1, $a1, 0x11F0
    ctx->pc = 0x4ec8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
    // 0x4ec8c4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ec8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ec8c8: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4ec8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ec8cc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4ec8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec8d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ec8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ec8d4: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4ec8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ec8d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ec8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec8dc: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4ec8dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4ec8e0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4ec8e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ec8e4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ec8e8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ec8e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec8ec: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4ec8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4ec8f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec8f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4ec8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ec8f8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4ec8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4ec8fc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec904: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ec904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ec908: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4ec908u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec90c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec910: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ec914: 0x1084018  mult        $t0, $t0, $t0
    ctx->pc = 0x4ec914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ec918: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4ec91c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4ec91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec920: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4ec920u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec924: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4ec924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4ec928: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ec928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec92c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4ec92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4ec930: 0xe71018  mult        $v0, $a3, $a3
    ctx->pc = 0x4ec930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ec934: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ec934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ec938: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4ec938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4ec93c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ec93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ec940: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ec940u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4ec944: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x4ec944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4ec948: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4ec948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4ec94c: 0xc12a1cc  jal         func_4A8730
    ctx->pc = 0x4EC94Cu;
    SET_GPR_U32(ctx, 31, 0x4EC954u);
    ctx->pc = 0x4EC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC94Cu;
    // 0x4ec950: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8730u, 0x4EC94Cu, 0x4EC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC954u;
label_4ec954:
    // 0x4ec954: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EC954u;
    SET_GPR_U32(ctx, 31, 0x4EC95Cu);
    ctx->pc = 0x4EC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC954u;
    // 0x4ec958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EC954u, 0x4EC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC95Cu;
label_4ec95c:
    // 0x4ec95c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ec95cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec960: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ec960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec964: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ec968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ec96c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EC96Cu;
    SET_GPR_U32(ctx, 31, 0x4EC974u);
    ctx->pc = 0x4EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC96Cu;
    // 0x4ec970: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EC96Cu, 0x4EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC974u;
label_4ec974:
    // 0x4ec974: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ec974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec978: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec97c: 0x96890000  lhu         $t1, 0x0($s4)
    ctx->pc = 0x4ec97cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec980: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec984: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4ec984u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec988: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec98c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4ec98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec990: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec994: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec998: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4ec998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4ec99c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4ec99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec9a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec9a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec9a4: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x4ec9a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec9a8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x4ec9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4ec9ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4ec9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec9b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec9b4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4ec9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4ec9b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec9bc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4ec9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4ec9c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec9c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec9c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ec9c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ec9cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ec9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec9d0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ec9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec9d4: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4ec9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x4ec9d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec9dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec9e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec9e4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ec9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ec9e8: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ec9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ec9ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ec9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec9f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4ec9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec9f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec9f8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4ec9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ec9fc: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4ec9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4eca00: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4eca00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4eca04: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4ECA04u;
    SET_GPR_U32(ctx, 31, 0x4ECA0Cu);
    ctx->pc = 0x4ECA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA04u;
    // 0x4eca08: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4ECA04u, 0x4ECA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA0Cu;
label_4eca0c:
    // 0x4eca0c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4ECA0Cu;
    SET_GPR_U32(ctx, 31, 0x4ECA14u);
    ctx->pc = 0x4ECA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA0Cu;
    // 0x4eca10: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4ECA0Cu, 0x4ECA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA14u;
label_4eca14:
    // 0x4eca14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eca18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eca18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4eca1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4eca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4eca20: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECA20u;
    SET_GPR_U32(ctx, 31, 0x4ECA28u);
    ctx->pc = 0x4ECA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA20u;
    // 0x4eca24: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECA20u, 0x4ECA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA28u;
label_4eca28:
    // 0x4eca28: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4eca28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eca2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eca2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eca34: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4eca34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eca38: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4eca38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4eca3c: 0x70651818  mult1       $v1, $v1, $a1
    ctx->pc = 0x4eca3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4eca40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4eca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eca44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4eca44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4eca48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eca48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4eca4c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECA4Cu;
    SET_GPR_U32(ctx, 31, 0x4ECA54u);
    ctx->pc = 0x4ECA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA4Cu;
    // 0x4eca50: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECA4Cu, 0x4ECA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA54u;
label_4eca54:
    // 0x4eca54: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECA54u;
    SET_GPR_U32(ctx, 31, 0x4ECA5Cu);
    ctx->pc = 0x4ECA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA54u;
    // 0x4eca58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECA54u, 0x4ECA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA5Cu;
label_4eca5c:
    // 0x4eca5c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4eca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eca60: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4eca60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4eca64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eca64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eca68: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x4eca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x4eca6c: 0x87c70000  lh          $a3, 0x0($fp)
    ctx->pc = 0x4eca6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4eca70: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4eca70u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11F0u));
    // 0x4eca74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eca78: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x4eca78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eca7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eca7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eca80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4eca84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4eca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eca88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eca8c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4eca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4eca90: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eca90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eca94: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4eca94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4eca98: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4eca98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4eca9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecaa0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ecaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ecaa4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ecaa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ecaa8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ecaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ecaac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4ecaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecab0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ecab0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ecab4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4ecab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ecab8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ecab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ecabc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4ecabcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ecac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ecac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ecac4: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4ecac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ecac8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ecac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ecacc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ecaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ecad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ecad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ecad4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECAD4u;
    SET_GPR_U32(ctx, 31, 0x4ECADCu);
    ctx->pc = 0x4ECAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECAD4u;
    // 0x4ecad8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECAD4u, 0x4ECADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECADCu;
label_4ecadc:
    // 0x4ecadc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ecadcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ecae0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4ecae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ecae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ecae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecae8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x4ecae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x4ecaec: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x4ecaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x4ecaf0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ecaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ecaf4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECAF4u;
    SET_GPR_U32(ctx, 31, 0x4ECAFCu);
    ctx->pc = 0x4ECAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECAF4u;
    // 0x4ecaf8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECAF4u, 0x4ECAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECAFCu;
label_4ecafc:
    // 0x4ecafc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ECAFCu;
    SET_GPR_U32(ctx, 31, 0x4ECB04u);
    ctx->pc = 0x4ECB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECAFCu;
    // 0x4ecb00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ECAFCu, 0x4ECB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECB04u;
label_4ecb04:
    // 0x4ecb04: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ecb04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ecb08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECB08u;
    {
        const bool branch_taken_0x4ecb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ecb08) {
            ctx->pc = 0x4ECB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECB08u;
            // 0x4ecb0c: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECB20u;
            goto label_4ecb20;
        }
    }
    ctx->pc = 0x4ECB10u;
    // 0x4ecb10: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4ecb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ecb14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ECB14u;
    {
        const bool branch_taken_0x4ecb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB14u;
        // 0x4ecb18: 0x344300ff  ori         $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecb14) {
            ctx->pc = 0x4ECB28u;
            goto label_4ecb28;
        }
    }
    ctx->pc = 0x4ECB1Cu;
    // 0x4ecb1c: 0x0  nop
    ctx->pc = 0x4ecb1cu;
    // NOP
label_4ecb20:
    // 0x4ecb20: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ecb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ecb24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ecb28:
    // 0x4ecb28: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ecb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ecb2c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ecb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ecb30: 0x848211e8  lh          $v0, 0x11E8($a0)
    ctx->pc = 0x4ecb30u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F11E8u));
    // 0x4ecb34: 0x24a411f0  addiu       $a0, $a1, 0x11F0
    ctx->pc = 0x4ecb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
    // 0x4ecb38: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECB38u;
    {
        const bool branch_taken_0x4ecb38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ECB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB38u;
        // 0x4ecb3c: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecb38) {
            ctx->pc = 0x4ECB50u;
            goto label_4ecb50;
        }
    }
    ctx->pc = 0x4ECB40u;
    // 0x4ecb40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ecb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecb44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECB44u;
    {
        const bool branch_taken_0x4ecb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB44u;
        // 0x4ecb48: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecb44) {
            ctx->pc = 0x4ECB5Cu;
            goto label_4ecb5c;
        }
    }
    ctx->pc = 0x4ECB4Cu;
    // 0x4ecb4c: 0x0  nop
    ctx->pc = 0x4ecb4cu;
    // NOP
label_4ecb50:
    // 0x4ecb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ecb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecb54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ecb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecb58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ecb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ecb5c:
    // 0x4ecb5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ecb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ecb60: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ecb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ecb64: 0x244611e8  addiu       $a2, $v0, 0x11E8
    ctx->pc = 0x4ecb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
    // 0x4ecb68: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ecb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ecb6c: 0x946711f0  lhu         $a3, 0x11F0($v1)
    ctx->pc = 0x4ecb6cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F11F0u));
    // 0x4ecb70: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ecb70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecb74: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ecb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F11E8u));
    // 0x4ecb78: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ecb7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ecb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ecb80: 0x248911f4  addiu       $t1, $a0, 0x11F4
    ctx->pc = 0x4ecb80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4ecb84: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4ecb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4ecb88: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ecb88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ecb8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecb90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecb94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ecb94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ecb98: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4ecb98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecb9c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ecb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ecba0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4ecba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecba4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecba8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4ecba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4ecbac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ecbacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ecbb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecbb4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ecbb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ecbb8: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ecbb8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ecbbc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ecbbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecbc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ecbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ecbc4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ecbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ecbc8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ecbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ecbcc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4ecbd0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4ecbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4ecbd4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ecbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ecbd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecbdc: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x4ecbdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecbe0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ecbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ecbe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecbe8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ecbe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecbec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ecbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ecbf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecbf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ecbf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ecbf8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ecbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ecbfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecc00: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ecc00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ecc04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ecc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecc08: 0xa6e20136  sh          $v0, 0x136($s7)
    ctx->pc = 0x4ecc08u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ecc0c: 0x84a311ec  lh          $v1, 0x11EC($a1)
    ctx->pc = 0x4ecc0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4588)));
    // 0x4ecc10: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECC10u;
    {
        const bool branch_taken_0x4ecc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc10) {
            ctx->pc = 0x4ECC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECC10u;
            // 0x4ecc14: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECC28u;
            goto label_4ecc28;
        }
    }
    ctx->pc = 0x4ECC18u;
    // 0x4ecc18: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ecc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ECC1Cu;
    {
        const bool branch_taken_0x4ecc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC1Cu;
        // 0x4ecc20: 0x344300ff  ori         $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc1c) {
            ctx->pc = 0x4ECC30u;
            goto label_4ecc30;
        }
    }
    ctx->pc = 0x4ECC24u;
    // 0x4ecc24: 0x0  nop
    ctx->pc = 0x4ecc24u;
    // NOP
label_4ecc28:
    // 0x4ecc28: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ecc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ecc2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ecc30:
    // 0x4ecc30: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ecc30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ecc34: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ecc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ecc38: 0x84c211ec  lh          $v0, 0x11EC($a2)
    ctx->pc = 0x4ecc38u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F11ECu));
    // 0x4ecc3c: 0x24a411f0  addiu       $a0, $a1, 0x11F0
    ctx->pc = 0x4ecc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
    // 0x4ecc40: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECC40u;
    {
        const bool branch_taken_0x4ecc40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ECC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC40u;
        // 0x4ecc44: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc40) {
            ctx->pc = 0x4ECC58u;
            goto label_4ecc58;
        }
    }
    ctx->pc = 0x4ECC48u;
    // 0x4ecc48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ecc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecc4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4ECC4Cu;
    {
        const bool branch_taken_0x4ecc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC4Cu;
        // 0x4ecc50: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc4c) {
            ctx->pc = 0x4ECC64u;
            goto label_4ecc64;
        }
    }
    ctx->pc = 0x4ECC54u;
    // 0x4ecc54: 0x0  nop
    ctx->pc = 0x4ecc54u;
    // NOP
label_4ecc58:
    // 0x4ecc58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ecc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecc5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ecc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecc60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ecc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ecc64:
    // 0x4ecc64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ecc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ecc68: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ecc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ecc6c: 0x244611ec  addiu       $a2, $v0, 0x11EC
    ctx->pc = 0x4ecc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4588));
    // 0x4ecc70: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ecc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ecc74: 0x946711f0  lhu         $a3, 0x11F0($v1)
    ctx->pc = 0x4ecc74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F11F0u));
    // 0x4ecc78: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ecc78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecc7c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ecc7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F11ECu));
    // 0x4ecc80: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ecc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ecc84: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4ecc84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ecc88: 0x248811f4  addiu       $t0, $a0, 0x11F4
    ctx->pc = 0x4ecc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4ecc8c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4ecc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4ecc90: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ecc90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ecc94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecc98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ecc98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ecc9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ecc9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ecca0: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x4ecca0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecca4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ecca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ecca8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ecca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4eccac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4eccacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4eccb0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4eccb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4eccb4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4eccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4eccb8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eccb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eccbc: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4eccbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4eccc0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4eccc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4eccc4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4eccc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eccc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecccc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4eccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4eccd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4eccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eccd4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4eccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4eccd8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4eccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4eccdc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4eccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ecce0: 0x26ea0166  addiu       $t2, $s7, 0x166
    ctx->pc = 0x4ecce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 358));
    // 0x4ecce4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ecce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ecce8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ecce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4eccec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4eccecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4eccf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eccf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eccf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4eccf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eccf8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4eccf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eccfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4eccfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ecd00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ecd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ecd04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ecd04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ecd08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecd0c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4ecd0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ecd10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ecd10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ecd14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4ecd14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ecd18: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ecd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ecd1c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4ecd1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ecd20: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ecd20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ecd24: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4ecd24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ecd28: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4ecd28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4ecd2c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4ecd2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ecd30: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4ecd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecd34: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4ecd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ecd38: 0xa6e30138  sh          $v1, 0x138($s7)
    ctx->pc = 0x4ecd38u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ecd3c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4ecd3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ecd40: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4ecd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ecd44: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ecd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ecd48: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4ecd48u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ecd4c: 0x813b37e  j           func_4ECDF8
    ctx->pc = 0x4ECD4Cu;
    ctx->pc = 0x4ECD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECD4Cu;
    // 0x4ecd50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF8u;
    sub_004ECDF8_0x4ecdf8(rdram, ctx, runtime); return;
    ctx->pc = 0x4ECD54u;
    // 0x4ecd54: 0x0  nop
    ctx->pc = 0x4ecd54u;
    // NOP
    ctx->pc = 0x4ecd58u;
}
