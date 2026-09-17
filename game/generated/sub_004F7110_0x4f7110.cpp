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

// Function: sub_004F7110
// Address: 0x4f7110 - 0x4f76b8
void sub_004F7110_0x4f7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7110_0x4f7110");
#endif

    switch (ctx->pc) {
        case 0x4f7138u: goto label_4f7138;
        case 0x4f7150u: goto label_4f7150;
        case 0x4f7328u: goto label_4f7328;
        case 0x4f7388u: goto label_4f7388;
        case 0x4f73acu: goto label_4f73ac;
        case 0x4f73c0u: goto label_4f73c0;
        case 0x4f73e8u: goto label_4f73e8;
        case 0x4f73f0u: goto label_4f73f0;
        case 0x4f7488u: goto label_4f7488;
        case 0x4f7490u: goto label_4f7490;
        case 0x4f7534u: goto label_4f7534;
        case 0x4f753cu: goto label_4f753c;
        case 0x4f75d0u: goto label_4f75d0;
        case 0x4f75fcu: goto label_4f75fc;
        case 0x4f7684u: goto label_4f7684;
        default: break;
    }

    ctx->pc = 0x4f7110u;

    // 0x4f7110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f7110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f7114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f7114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f7118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f7118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f711c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f7120: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f7120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f7124: 0x261201b4  addiu       $s2, $s0, 0x1B4
    ctx->pc = 0x4f7124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f7128: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f7128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f712c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f7130: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F7130u;
    SET_GPR_U32(ctx, 31, 0x4F7138u);
    ctx->pc = 0x4F7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7130u;
    // 0x4f7134: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F7130u, 0x4F7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7138u;
label_4f7138:
    // 0x4f7138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f7138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f713c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f713cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f7140: 0x442005e  bltzl       $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x4F7140u;
    {
        const bool branch_taken_0x4f7140 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f7140) {
            ctx->pc = 0x4F7144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F7140u;
            // 0x4f7144: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F72BCu;
            goto label_4f72bc;
        }
    }
    ctx->pc = 0x4F7148u;
    // 0x4f7148: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F7148u;
    SET_GPR_U32(ctx, 31, 0x4F7150u);
    ctx->pc = 0x4F714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7148u;
    // 0x4f714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F7148u, 0x4F7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7150u;
label_4f7150:
    // 0x4f7150: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x4f7150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f7154: 0x9602015e  lhu         $v0, 0x15E($s0)
    ctx->pc = 0x4f7154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4f7158: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f7158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f715c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f7160: 0x260a0160  addiu       $t2, $s0, 0x160
    ctx->pc = 0x4f7160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f7164: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7168: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f7168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f716c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7170: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f7170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f7174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7178: 0x2606012c  addiu       $a2, $s0, 0x12C
    ctx->pc = 0x4f7178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f717c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f717cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f7180: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7184: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x4f7184u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x4f7188: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4f7188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f718c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4f718cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4f7190: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f7194: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f7198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f719c: 0x96020162  lhu         $v0, 0x162($s0)
    ctx->pc = 0x4f719cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f71a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f71a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f71a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f71ac: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f71acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f71b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f71b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f71b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f71b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f71b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f71bc: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f71bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f71c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f71c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f71c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f71cc: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f71ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f71d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f71d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f71d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f71d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f71dc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f71dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f71e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f71e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f71e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f71e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f71e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f71ec: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f71ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f71f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f71f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f71f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f71f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f71f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f71fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4f71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4f7200: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4f7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4f7204: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f7204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f7208: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4f7208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4f720c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4f7210: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f7210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f7214: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x4f7214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f7218: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4f7218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4f721c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4f721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4f7220: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4f7220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4f7224: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4f7224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4f7228: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f7228u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f722c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f722cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f7230: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7230u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7234: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f7234u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f7238: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f723c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x4f723cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4f7240: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f7240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f7244: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7248: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4f7248u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4f724c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4f724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4f7250: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7254: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f7254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f7258: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f7258u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f725c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f725cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7264: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x4f7264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4f7268: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x4f7268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f726c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f726cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7270: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x4f7270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4f7274: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4f7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f7278: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f727c: 0x124482b  sltu        $t1, $t1, $a0
    ctx->pc = 0x4f727cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f7280: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7280u;
    {
        const bool branch_taken_0x4f7280 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7280u;
        // 0x4f7284: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7280) {
            ctx->pc = 0x4F72A4u;
            goto label_4f72a4;
        }
    }
    ctx->pc = 0x4F7288u;
    // 0x4f7288: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x4f7288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x4f728c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x4f728cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7294: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f7294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f7298: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4f7298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f729c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x4f729cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x4f72a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f72a4:
    // 0x4f72a4: 0xa5530000  sh          $s3, 0x0($t2)
    ctx->pc = 0x4f72a4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f72a8: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x4f72a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f72ac: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f72acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f72b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f72b4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4f72b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f72b8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f72b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f72bc:
    // 0x4f72bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F72BCu;
    {
        const bool branch_taken_0x4f72bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F72BCu;
        // 0x4f72c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f72bc) {
            ctx->pc = 0x4F72E8u;
            goto label_4f72e8;
        }
    }
    ctx->pc = 0x4F72C4u;
    // 0x4f72c4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F72C4u;
    {
        const bool branch_taken_0x4f72c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F72C4u;
        // 0x4f72c8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f72c4) {
            ctx->pc = 0x4F7308u;
            goto label_4f7308;
        }
    }
    ctx->pc = 0x4F72CCu;
    // 0x4f72cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f72ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f72d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f72d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f72d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f72d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f72d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f72d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f72dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F72DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F72DCu;
        // 0x4f72e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F72DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F72E4u;
    // 0x4f72e4: 0x0  nop
    ctx->pc = 0x4f72e4u;
    // NOP
label_4f72e8:
    // 0x4f72e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f72ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f72ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f72f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f72f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f72f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f72f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f72f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f72f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f72fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f72fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7300: 0x813db86  j           func_4F6E18
    ctx->pc = 0x4F7300u;
    ctx->pc = 0x4F7304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7300u;
    // 0x4f7304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6E18u, 0x4F7300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F7308u;
label_4f7308:
    // 0x4f7308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f730c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f730cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f7310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f7314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f7318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f7318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f731c: 0x813db36  j           func_4F6CD8
    ctx->pc = 0x4F731Cu;
    ctx->pc = 0x4F7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F731Cu;
    // 0x4f7320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6CD8u, 0x4F731Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F7324u;
    // 0x4f7324: 0x0  nop
    ctx->pc = 0x4f7324u;
    // NOP
label_4f7328:
    // 0x4f7328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f7328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f732c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f7330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f7330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7334: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f7334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f7338: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4f7338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f733c: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4f733cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4f7340: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f7340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f7344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f7344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f7348: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f7348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f734c: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F734Cu;
    {
        const bool branch_taken_0x4f734c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F734Cu;
        // 0x4f7350: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f734c) {
            ctx->pc = 0x4F7368u;
            goto label_4f7368;
        }
    }
    ctx->pc = 0x4F7354u;
    // 0x4f7354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7358: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f7358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f735c: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F735Cu;
    ctx->pc = 0x4F7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F735Cu;
    // 0x4f7360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F735Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F7364u;
    // 0x4f7364: 0x0  nop
    ctx->pc = 0x4f7364u;
    // NOP
label_4f7368:
    // 0x4f7368: 0x86030136  lh          $v1, 0x136($s0)
    ctx->pc = 0x4f7368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4f736c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f736cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f7370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f7374: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4f7374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f7378: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4f7378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f737c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4f737cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f7380: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7380u;
    SET_GPR_U32(ctx, 31, 0x4F7388u);
    ctx->pc = 0x4F7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7380u;
    // 0x4f7384: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7380u, 0x4F7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7388u;
label_4f7388:
    // 0x4f7388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f738c: 0x960501b6  lhu         $a1, 0x1B6($s0)
    ctx->pc = 0x4f738cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f7390: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4f7390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f7394: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x4f7394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f7398: 0x30a50006  andi        $a1, $a1, 0x6
    ctx->pc = 0x4f7398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x4f739c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F739Cu;
    {
        const bool branch_taken_0x4f739c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F739Cu;
        // 0x4f73a0: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f739c) {
            ctx->pc = 0x4F73B0u;
            goto label_4f73b0;
        }
    }
    ctx->pc = 0x4F73A4u;
    // 0x4f73a4: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F73A4u;
    SET_GPR_U32(ctx, 31, 0x4F73ACu);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F73A4u, 0x4F73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F73ACu;
label_4f73ac:
    // 0x4f73ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f73b0:
    // 0x4f73b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f73b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f73b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f73b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f73b8: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F73B8u;
    ctx->pc = 0x4F73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F73B8u;
    // 0x4f73bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F73C0u;
label_4f73c0:
    // 0x4f73c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f73c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f73c8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f73c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f73cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f73ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f73d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f73d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f73d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f73d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f73d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f73dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f73e0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F73E0u;
    SET_GPR_U32(ctx, 31, 0x4F73E8u);
    ctx->pc = 0x4F73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F73E0u;
    // 0x4f73e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F73E0u, 0x4F73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F73E8u;
label_4f73e8:
    // 0x4f73e8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F73E8u;
    SET_GPR_U32(ctx, 31, 0x4F73F0u);
    ctx->pc = 0x4F73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F73E8u;
    // 0x4f73ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F73E8u, 0x4F73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F73F0u;
label_4f73f0:
    // 0x4f73f0: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f73f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f73f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f73f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f73f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4f73f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f73fc: 0x3243000f  andi        $v1, $s2, 0xF
    ctx->pc = 0x4f73fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x4f7400: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f7400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f7404: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7408: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f7408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f740c: 0x44980b  movn        $s3, $v0, $a0
    ctx->pc = 0x4f740cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x4f7410: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x4f7410u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f7414: 0xa6320024  sh          $s2, 0x24($s1)
    ctx->pc = 0x4f7414u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f7418: 0xa39024  and         $s2, $a1, $v1
    ctx->pc = 0x4f7418u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f741c: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f7420: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f7420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7424: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7428: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f7428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f742c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f742cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7430: 0xa6240022  sh          $a0, 0x22($s1)
    ctx->pc = 0x4f7430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f7434: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7438: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f7438u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f743c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f743cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7440: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f7440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f7444: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f7444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7448: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f7448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f744c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f744cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7450: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f7450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f7454: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f7454u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f7458: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f7458u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f745c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7460: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f7460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f7464: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f7464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f7468: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f7468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f746c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f746cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7470: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f7474: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7478: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f7478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f747c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f747cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f7480: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7480u;
    SET_GPR_U32(ctx, 31, 0x4F7488u);
    ctx->pc = 0x4F7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7480u;
    // 0x4f7484: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7480u, 0x4F7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7488u;
label_4f7488:
    // 0x4f7488: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7488u;
    SET_GPR_U32(ctx, 31, 0x4F7490u);
    ctx->pc = 0x4F748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7488u;
    // 0x4f748c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7488u, 0x4F7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7490u;
label_4f7490:
    // 0x4f7490: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f7490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f7494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7498: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f7498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f749c: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x4f749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x4f74a0: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f74a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f74a4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f74a8: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f74a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f74ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f74acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f74b0: 0xa6320028  sh          $s2, 0x28($s1)
    ctx->pc = 0x4f74b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f74b4: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x4f74b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f74b8: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f74b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f74bc: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f74bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f74c0: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f74c4: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f74c8: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f74c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f74cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f74d0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f74d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f74d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f74d8: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4f74d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f74dc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f74dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f74e0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f74e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f74e4: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f74e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f74e8: 0x26270128  addiu       $a3, $s1, 0x128
    ctx->pc = 0x4f74e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f74ec: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f74f0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4f74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f74f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f74f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f74f8: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f74f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f74fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f7500: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x4f7500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4f7504: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7508: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7508u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f750c: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f750cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f7510: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f7510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f7514: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f7514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7518: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f751c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f7520: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f7520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f7524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7528: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f7528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f752c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F752Cu;
    SET_GPR_U32(ctx, 31, 0x4F7534u);
    ctx->pc = 0x4F7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F752Cu;
    // 0x4f7530: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F752Cu, 0x4F7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7534u;
label_4f7534:
    // 0x4f7534: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7534u;
    SET_GPR_U32(ctx, 31, 0x4F753Cu);
    ctx->pc = 0x4F7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7534u;
    // 0x4f7538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7534u, 0x4F753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F753Cu;
label_4f753c:
    // 0x4f753c: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f753cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7540: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f7540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7544: 0x2702824  and         $a1, $s3, $s0
    ctx->pc = 0x4f7544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f7548: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x4f7548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x4f754c: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f7550: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7554: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f7554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7558: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f7558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f755c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f755cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f7560: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x4f7560u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x4f7564: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f7564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7568: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f756c: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f756cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f7570: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7574: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f7574u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f7578: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f757c: 0x2628012c  addiu       $t0, $s1, 0x12C
    ctx->pc = 0x4f757cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f7580: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7584: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f7584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f7588: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f7588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f758c: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f758cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7590: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f7590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7594: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7598: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f7598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f759c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f75a0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f75a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f75a4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f75a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f75a8: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f75a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f75ac: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f75acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f75b0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f75b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f75b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f75b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f75bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f75c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f75c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f75c4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f75c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f75c8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F75C8u;
    SET_GPR_U32(ctx, 31, 0x4F75D0u);
    ctx->pc = 0x4F75CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F75C8u;
    // 0x4f75cc: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F75C8u, 0x4F75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F75D0u;
label_4f75d0:
    // 0x4f75d0: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f75d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f75d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f75d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f75d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f75dc: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4f75dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f75e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f75e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f75e4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x4f75e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f75e8: 0x2673002d  addiu       $s3, $s3, 0x2D
    ctx->pc = 0x4f75e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
    // 0x4f75ec: 0xa633015e  sh          $s3, 0x15E($s1)
    ctx->pc = 0x4f75ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f75f0: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f75f4: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F75F4u;
    SET_GPR_U32(ctx, 31, 0x4F75FCu);
    ctx->pc = 0x4F75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F75F4u;
    // 0x4f75f8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F75F4u, 0x4F75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F75FCu;
label_4f75fc:
    // 0x4f75fc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7600: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7604: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4f7604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7608: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7608u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f760c: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f760cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f7610: 0x324201ff  andi        $v0, $s2, 0x1FF
    ctx->pc = 0x4f7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    // 0x4f7614: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f7614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7618: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f761c: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f761cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f7620: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7620u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7624: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f7624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7628: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f7628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f762c: 0xc4980a  movz        $s3, $a2, $a0
    ctx->pc = 0x4f762cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f7630: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7630u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7634: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f7634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7638: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f763c: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f763cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f7640: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7644: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f7644u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f7648: 0xc39024  and         $s2, $a2, $v1
    ctx->pc = 0x4f7648u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f764c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7650: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f7650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f7654: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f7654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7658: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f765c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f765cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7660: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7664: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f7664u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f7668: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f766c: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4f766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7670: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7674: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f7674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f7678: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7678u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f767c: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F767Cu;
    SET_GPR_U32(ctx, 31, 0x4F7684u);
    ctx->pc = 0x4F7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F767Cu;
    // 0x4f7680: 0xa6320136  sh          $s2, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F767Cu, 0x4F7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7684u;
label_4f7684:
    // 0x4f7684: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f7684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f7688: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f7688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f768c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f7694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7698: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f7698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f769c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f769cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f76a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f76a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f76a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f76a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f76a8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f76a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f76ac: 0x813dcca  j           func_4F7328
    ctx->pc = 0x4F76ACu;
    ctx->pc = 0x4F76B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F76ACu;
    // 0x4f76b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7328u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f7328;
    ctx->pc = 0x4F76B4u;
    // 0x4f76b4: 0x0  nop
    ctx->pc = 0x4f76b4u;
    // NOP
    ctx->pc = 0x4f76b8u;
}
