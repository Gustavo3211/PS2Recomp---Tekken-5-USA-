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

// Function: sub_004EBB78
// Address: 0x4ebb78 - 0x4ebe40
void sub_004EBB78_0x4ebb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBB78_0x4ebb78");
#endif

    switch (ctx->pc) {
        case 0x4ebdfcu: goto label_4ebdfc;
        case 0x4ebe0cu: goto label_4ebe0c;
        default: break;
    }

    ctx->pc = 0x4ebb78u;

    // 0x4ebb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ebb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ebb7c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ebb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ebb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ebb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ebb84: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ebb84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ebb88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ebb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ebb8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ebb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ebb90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ebb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ebb94: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4ebb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ebb98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ebb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ebb9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ebb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ebba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ebba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ebba4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ebba4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ebba8: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ebba8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ebbac: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4ebbacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4ebbb0: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4ebbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4ebbb4: 0x25ad11f4  addiu       $t5, $t5, 0x11F4
    ctx->pc = 0x4ebbb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4596));
    // 0x4ebbb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ebbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ebbbc: 0x25ce11f8  addiu       $t6, $t6, 0x11F8
    ctx->pc = 0x4ebbbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4600));
    // 0x4ebbc0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ebbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ebbc4: 0x25ef11fc  addiu       $t7, $t7, 0x11FC
    ctx->pc = 0x4ebbc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4604));
    // 0x4ebbc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebbcc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ebbccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ebbd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebbd4: 0x258c11ec  addiu       $t4, $t4, 0x11EC
    ctx->pc = 0x4ebbd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4588));
    // 0x4ebbd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ebbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ebbdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebbe0: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ebbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ebbe4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ebbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ebbe8: 0x2613249c  addiu       $s3, $s0, 0x249C
    ctx->pc = 0x4ebbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4ebbec: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4ebbecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebbf0: 0x26122494  addiu       $s2, $s0, 0x2494
    ctx->pc = 0x4ebbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4ebbf4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4ebbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4ebbf8: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4ebbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebbfc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ebbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ebc00: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4ebc00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebc04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebc08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ebc08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ebc0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ebc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ebc10: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x4ebc10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebc14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ebc18: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ebc18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ebc1c: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x4ebc1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ebc20: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ebc20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ebc24: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4ebc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ebc28: 0x26102498  addiu       $s0, $s0, 0x2498
    ctx->pc = 0x4ebc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4ebc2c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4ebc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4ebc30: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ebc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ebc34: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4ebc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4ebc38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ebc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ebc3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ebc40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ebc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ebc44: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4ebc44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4ebc48: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ebc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ebc4c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4ebc4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4ebc50: 0x8c691208  lw          $t1, 0x1208($v1)
    ctx->pc = 0x4ebc50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
    // 0x4ebc54: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4ebc54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x4ebc58: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ebc58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ebc5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ebc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ebc60: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ebc60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ebc64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ebc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ebc68: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x4ebc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x4ebc6c: 0x242180a8  addiu       $at, $at, -0x7F58
    ctx->pc = 0x4ebc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294934696));
    // 0x4ebc70: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4ebc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4ebc74: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4ebc74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ebc78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ebc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ebc7c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x4ebc7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4ebc80: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4ebc80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ebc84: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ebc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ebc88: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4ebc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4ebc8c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4ebc8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ebc90: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4ebc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4ebc94: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4ebc94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4ebc98: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4ebc98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4ebc9c: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4ebc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4ebca0: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4ebca0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4ebca4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ebca4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ebca8: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4ebca8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4ebcac: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ebcacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ebcb0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ebcb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ebcb4: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4ebcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4ebcb8: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4ebcb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebcbc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebcc0: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4ebcc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebcc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebcc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebcc8: 0x85e50000  lh          $a1, 0x0($t7)
    ctx->pc = 0x4ebcc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ebcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ebcd0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ebcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ebcd4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4ebcd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ebcd8: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4ebcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4ebcdc: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4ebce0: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4ebce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebce4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebce8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebcec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ebcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ebcf0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4ebcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4ebcf4: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4ebcf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4ebcf8: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4ebcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4ebcfc: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4ebd00: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebd04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebd04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebd08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ebd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ebd0c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4ebd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4ebd10: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x4ebd10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x4ebd14: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4ebd14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4ebd18: 0xa623011a  sh          $v1, 0x11A($s1)
    ctx->pc = 0x4ebd18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ebd1c: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ebd1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebd20: 0xa622011e  sh          $v0, 0x11E($s1)
    ctx->pc = 0x4ebd20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebd24: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4ebd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4ebd28: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x4ebd28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebd2c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebd30: 0xa6230122  sh          $v1, 0x122($s1)
    ctx->pc = 0x4ebd30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ebd34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebd34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebd38: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4ebd38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebd3c: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4ebd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebd40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ebd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ebd44: 0x85c80000  lh          $t0, 0x0($t6)
    ctx->pc = 0x4ebd44u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebd48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ebd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ebd4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ebd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ebd50: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ebd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ebd54: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4ebd54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebd58: 0x85ec0000  lh          $t4, 0x0($t7)
    ctx->pc = 0x4ebd58u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebd5c: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4ebd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4ebd60: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ebd60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ebd64: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4ebd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4ebd68: 0x8deb0000  lw          $t3, 0x0($t7)
    ctx->pc = 0x4ebd68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebd6c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebd70: 0x95a40000  lhu         $a0, 0x0($t5)
    ctx->pc = 0x4ebd70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ebd74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebd74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebd78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ebd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ebd7c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4ebd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ebd80: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4ebd80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebd84: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x4ebd84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x4ebd88: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x4ebd88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ebd8c: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4ebd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4ebd90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4ebd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ebd94: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4ebd94u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4ebd98: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4ebd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4ebd9c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x4ebd9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x4ebda0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ebda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ebda4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4ebda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4ebda8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4ebda8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4ebdac: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4ebdacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ebdb0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4ebdb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4ebdb4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ebdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ebdb8: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4ebdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4ebdbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebdbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebdc0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ebdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ebdc4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x4ebdc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4ebdc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebdcc: 0x1866025  or          $t4, $t4, $a2
    ctx->pc = 0x4ebdccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x4ebdd0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4ebdd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4ebdd4: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x4ebdd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x4ebdd8: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4ebdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4ebddc: 0xadeb0000  sw          $t3, 0x0($t7)
    ctx->pc = 0x4ebddcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 11));
    // 0x4ebde0: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x4ebde0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x4ebde4: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4ebde4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ebde8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ebde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ebdec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ebdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ebdf0: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4ebdf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4ebdf4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4EBDF4u;
    SET_GPR_U32(ctx, 31, 0x4EBDFCu);
    ctx->pc = 0x4EBDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBDF4u;
    // 0x4ebdf8: 0xae6a0000  sw          $t2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4EBDF4u, 0x4EBDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBDFCu;
label_4ebdfc:
    // 0x4ebdfc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x4ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4ebe00: 0xa622015a  sh          $v0, 0x15A($s1)
    ctx->pc = 0x4ebe00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebe04: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4EBE04u;
    SET_GPR_U32(ctx, 31, 0x4EBE0Cu);
    ctx->pc = 0x4EBE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBE04u;
    // 0x4ebe08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4EBE04u, 0x4EBE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBE0Cu;
label_4ebe0c:
    // 0x4ebe0c: 0x26230164  addiu       $v1, $s1, 0x164
    ctx->pc = 0x4ebe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x4ebe10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ebe10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ebe14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ebe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ebe18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ebe18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ebe1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ebe1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ebe20: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ebe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ebe24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ebe24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ebe28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ebe28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ebe2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ebe2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ebe30: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ebe30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebe34: 0x813b08a  j           func_4EC228
    ctx->pc = 0x4EBE34u;
    ctx->pc = 0x4EBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBE34u;
    // 0x4ebe38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC228u;
    sub_004EC228_0x4ec228(rdram, ctx, runtime); return;
    ctx->pc = 0x4EBE3Cu;
    // 0x4ebe3c: 0x0  nop
    ctx->pc = 0x4ebe3cu;
    // NOP
    ctx->pc = 0x4ebe40u;
}
