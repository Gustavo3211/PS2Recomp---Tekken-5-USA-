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

// Function: sub_004DDD78
// Address: 0x4ddd78 - 0x4de6e8
void sub_004DDD78_0x4ddd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD78_0x4ddd78");
#endif

    switch (ctx->pc) {
        case 0x4ddd88u: goto label_4ddd88;
        case 0x4ddd90u: goto label_4ddd90;
        case 0x4ddda8u: goto label_4ddda8;
        case 0x4dddc0u: goto label_4dddc0;
        case 0x4ddff0u: goto label_4ddff0;
        case 0x4de080u: goto label_4de080;
        case 0x4de094u: goto label_4de094;
        case 0x4de09cu: goto label_4de09c;
        case 0x4de0a4u: goto label_4de0a4;
        case 0x4de134u: goto label_4de134;
        case 0x4de184u: goto label_4de184;
        case 0x4de1a4u: goto label_4de1a4;
        case 0x4de1ccu: goto label_4de1cc;
        case 0x4de224u: goto label_4de224;
        case 0x4de22cu: goto label_4de22c;
        case 0x4de2b8u: goto label_4de2b8;
        case 0x4de2c0u: goto label_4de2c0;
        case 0x4de36cu: goto label_4de36c;
        case 0x4de37cu: goto label_4de37c;
        case 0x4de390u: goto label_4de390;
        case 0x4de3b0u: goto label_4de3b0;
        case 0x4de3c0u: goto label_4de3c0;
        case 0x4de3d4u: goto label_4de3d4;
        case 0x4de524u: goto label_4de524;
        case 0x4de540u: goto label_4de540;
        case 0x4de550u: goto label_4de550;
        case 0x4de5d0u: goto label_4de5d0;
        case 0x4de600u: goto label_4de600;
        case 0x4de608u: goto label_4de608;
        case 0x4de610u: goto label_4de610;
        case 0x4de640u: goto label_4de640;
        case 0x4de6c0u: goto label_4de6c0;
        case 0x4de6c8u: goto label_4de6c8;
        case 0x4de6d0u: goto label_4de6d0;
        default: break;
    }

    ctx->pc = 0x4ddd78u;

    // 0x4ddd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd7c: 0x81379a4  j           func_4DE690
    ctx->pc = 0x4DDD7Cu;
    ctx->pc = 0x4DDD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD7Cu;
    // 0x4ddd80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE690u;
    goto label_4de690;
    ctx->pc = 0x4DDD84u;
    // 0x4ddd84: 0x0  nop
    ctx->pc = 0x4ddd84u;
    // NOP
label_4ddd88:
    // 0x4ddd88: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDD88u;
        // 0x4ddd8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDD90u;
label_4ddd90:
    // 0x4ddd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ddd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddd98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd9c: 0x813776a  j           func_4DDDA8
    ctx->pc = 0x4DDD9Cu;
    ctx->pc = 0x4DDDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD9Cu;
    // 0x4ddda0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDDA8u;
    goto label_4ddda8;
    ctx->pc = 0x4DDDA4u;
    // 0x4ddda4: 0x0  nop
    ctx->pc = 0x4ddda4u;
    // NOP
label_4ddda8:
    // 0x4ddda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dddac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dddb0: 0xa48001bc  sh          $zero, 0x1BC($a0)
    ctx->pc = 0x4dddb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dddb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dddb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dddb8: 0x8137770  j           func_4DDDC0
    ctx->pc = 0x4DDDB8u;
    ctx->pc = 0x4DDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDDB8u;
    // 0x4dddbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDDC0u;
    goto label_4dddc0;
    ctx->pc = 0x4DDDC0u;
label_4dddc0:
    // 0x4dddc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dddc4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4dddc4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4dddc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4dddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4dddcc: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x4dddccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4dddd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4dddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4dddd4: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x4dddd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4dddd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4dddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ddddc: 0x24940018  addiu       $s4, $a0, 0x18
    ctx->pc = 0x4ddddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4ddde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ddde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ddde4: 0x258c1120  addiu       $t4, $t4, 0x1120
    ctx->pc = 0x4ddde4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4384));
    // 0x4ddde8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ddde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dddec: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dddecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dddf0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dddf4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4dddf4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4dddf8: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x4dddf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
    // 0x4dddfc: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4dddfcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4dde00: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4dde00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dde04: 0x256b112c  addiu       $t3, $t3, 0x112C
    ctx->pc = 0x4dde04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4396));
    // 0x4dde08: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dde08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dde0c: 0x8caf1140  lw          $t7, 0x1140($a1)
    ctx->pc = 0x4dde0cu;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dde10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dde10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dde14: 0x25ad1130  addiu       $t5, $t5, 0x1130
    ctx->pc = 0x4dde14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4400));
    // 0x4dde18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dde1c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dde1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dde20: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4dde20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4dde24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dde24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dde28: 0x25ce1134  addiu       $t6, $t6, 0x1134
    ctx->pc = 0x4dde28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4404));
    // 0x4dde2c: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4dde2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dde30: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4dde30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dde34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4dde34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4dde38: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x4dde38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dde3c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dde3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dde40: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dde40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dde44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dde48: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dde48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dde4c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4dde4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4dde50: 0x85e2011a  lh          $v0, 0x11A($t7)
    ctx->pc = 0x4dde50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 282)));
    // 0x4dde54: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x4dde54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dde58: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dde58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dde5c: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4dde5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dde60: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dde60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dde64: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4dde64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4dde68: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4dde68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4dde6c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dde6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dde70: 0x63443  sra         $a2, $a2, 17
    ctx->pc = 0x4dde70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 17));
    // 0x4dde74: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4dde74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4dde78: 0x85e2011e  lh          $v0, 0x11E($t7)
    ctx->pc = 0x4dde78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 286)));
    // 0x4dde7c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4dde7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4dde80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4dde80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4dde84: 0x24217c58  addiu       $at, $at, 0x7C58
    ctx->pc = 0x4dde84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31832));
    // 0x4dde88: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x4dde88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x4dde8c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4dde8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dde90: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dde90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dde94: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4dde94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dde98: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4dde98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4dde9c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4dde9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4ddea0: 0x84d00000  lh          $s0, 0x0($a2)
    ctx->pc = 0x4ddea0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ddea4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4ddea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4ddea8: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x4ddea8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
    // 0x4ddeac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ddeacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ddeb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ddeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ddeb4: 0x85e20122  lh          $v0, 0x122($t7)
    ctx->pc = 0x4ddeb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 290)));
    // 0x4ddeb8: 0x240f0900  addiu       $t7, $zero, 0x900
    ctx->pc = 0x4ddeb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x4ddebc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4ddebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4ddec0: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x4ddec0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ddec4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ddec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ddec8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4ddec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ddecc: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ddeccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4dded0: 0x85a50000  lh          $a1, 0x0($t5)
    ctx->pc = 0x4dded0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dded4: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4dded4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4dded8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4dded8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ddedc: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4ddedcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4ddee0: 0x248701bc  addiu       $a3, $a0, 0x1BC
    ctx->pc = 0x4ddee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4ddee4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4ddee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4ddee8: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4ddee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ddeec: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4ddeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4ddef0: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4ddef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4ddef4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ddef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4ddef8: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x4ddef8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
    // 0x4ddefc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ddefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ddf00: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x4ddf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4ddf04: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ddf04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ddf08: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4ddf08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ddf0c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4ddf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4ddf10: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4ddf10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ddf14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ddf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ddf18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ddf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ddf1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ddf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ddf20: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ddf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ddf24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ddf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ddf28: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ddf28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ddf2c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4ddf2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ddf30: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ddf34: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ddf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ddf38: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ddf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ddf3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ddf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ddf40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ddf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ddf44: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4ddf44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4ddf48: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4ddf48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ddf4c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4ddf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ddf50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ddf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ddf54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ddf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddf58: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ddf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ddf5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ddf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ddf60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ddf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ddf64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ddf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ddf68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4ddf68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4ddf6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ddf6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddf70: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x4ddf70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x4ddf74: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ddf78: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4ddf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4ddf7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ddf7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ddf80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ddf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ddf84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ddf84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ddf88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ddf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ddf8c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4ddf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4ddf90: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ddf90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ddf94: 0x8485013a  lh          $a1, 0x13A($a0)
    ctx->pc = 0x4ddf94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 314)));
    // 0x4ddf98: 0xa483016a  sh          $v1, 0x16A($a0)
    ctx->pc = 0x4ddf98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ddf9c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4ddf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4ddfa0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4ddfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ddfa4: 0xa48f0166  sh          $t7, 0x166($a0)
    ctx->pc = 0x4ddfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 358), (uint16_t)GPR_U32(ctx, 15));
    // 0x4ddfa8: 0xa4820162  sh          $v0, 0x162($a0)
    ctx->pc = 0x4ddfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ddfac: 0xa4880168  sh          $t0, 0x168($a0)
    ctx->pc = 0x4ddfacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 360), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ddfb0: 0xa4800164  sh          $zero, 0x164($a0)
    ctx->pc = 0x4ddfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddfb4: 0xa4800136  sh          $zero, 0x136($a0)
    ctx->pc = 0x4ddfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddfb8: 0xa4800138  sh          $zero, 0x138($a0)
    ctx->pc = 0x4ddfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddfbc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4ddfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ddfc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ddfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ddfc4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ddfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ddfc8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4ddfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4ddfcc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ddfccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ddfd0: 0xa48901c2  sh          $t1, 0x1C2($a0)
    ctx->pc = 0x4ddfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 450), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ddfd4: 0xa4830148  sh          $v1, 0x148($a0)
    ctx->pc = 0x4ddfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ddfd8: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x4ddfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddfdc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ddfdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ddfe0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ddfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ddfe4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4ddfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ddfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDFE8u;
        // 0x4ddfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDFF0u;
label_4ddff0:
    // 0x4ddff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ddff4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ddff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddffc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ddffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4de000: 0x24461120  addiu       $a2, $v0, 0x1120
    ctx->pc = 0x4de000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4de004: 0x24a90166  addiu       $t1, $a1, 0x166
    ctx->pc = 0x4de004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 358));
    // 0x4de008: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4de008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4de00c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4de00cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4de010: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4de010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de014: 0x24a801bc  addiu       $t0, $a1, 0x1BC
    ctx->pc = 0x4de014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
    // 0x4de018: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de01c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4de01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4de020: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de024: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4de024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4de028: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x4de028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de02c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4de02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de030: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4de030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4de034: 0x2c420600  sltiu       $v0, $v0, 0x600
    ctx->pc = 0x4de034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4de038: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DE038u;
    {
        const bool branch_taken_0x4de038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE038u;
        // 0x4de03c: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de038) {
            ctx->pc = 0x4DE060u;
            goto label_4de060;
        }
    }
    ctx->pc = 0x4DE040u;
    // 0x4de040: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x4de040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x4de044: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4de044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4de048: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4de048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4de04c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4de04cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4de050: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4de050u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de054: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4DE054u;
    {
        const bool branch_taken_0x4de054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE054u;
        // 0x4de058: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de054) {
            ctx->pc = 0x4DE074u;
            goto label_4de074;
        }
    }
    ctx->pc = 0x4DE05Cu;
    // 0x4de05c: 0x0  nop
    ctx->pc = 0x4de05cu;
    // NOP
label_4de060:
    // 0x4de060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4de060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4de064: 0xa4a301b8  sh          $v1, 0x1B8($a1)
    ctx->pc = 0x4de064u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 440), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de068: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4de068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4de06c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4de06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4de070: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4de070u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4de074:
    // 0x4de074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de078: 0x813782e  j           func_4DE0B8
    ctx->pc = 0x4DE078u;
    ctx->pc = 0x4DE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE078u;
    // 0x4de07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0B8u;
    goto label_4de0b8;
    ctx->pc = 0x4DE080u;
label_4de080:
    // 0x4de080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4de084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4de088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4de08c: 0xc13725c  jal         func_4DC970
    ctx->pc = 0x4DE08Cu;
    SET_GPR_U32(ctx, 31, 0x4DE094u);
    ctx->pc = 0x4DE090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE08Cu;
    // 0x4de090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC970u, 0x4DE08Cu, 0x4DE094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE094u;
label_4de094:
    // 0x4de094: 0xc13758c  jal         func_4DD630
    ctx->pc = 0x4DE094u;
    SET_GPR_U32(ctx, 31, 0x4DE09Cu);
    ctx->pc = 0x4DE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE094u;
    // 0x4de098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD630u, 0x4DE094u, 0x4DE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE09Cu;
label_4de09c:
    // 0x4de09c: 0xc13753c  jal         func_4DD4F0
    ctx->pc = 0x4DE09Cu;
    SET_GPR_U32(ctx, 31, 0x4DE0A4u);
    ctx->pc = 0x4DE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE09Cu;
    // 0x4de0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD4F0u, 0x4DE09Cu, 0x4DE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE0A4u;
label_4de0a4:
    // 0x4de0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4de0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de0a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4de0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de0b0: 0x813782e  j           func_4DE0B8
    ctx->pc = 0x4DE0B0u;
    ctx->pc = 0x4DE0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE0B0u;
    // 0x4de0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0B8u;
    goto label_4de0b8;
    ctx->pc = 0x4DE0B8u;
label_4de0b8:
    // 0x4de0b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4de0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4de0bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4de0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4de0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de0c4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4de0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4de0c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4de0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4de0cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4de0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4de0d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4de0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4de0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4de0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de0d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4de0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4de0dc: 0x24531120  addiu       $s3, $v0, 0x1120
    ctx->pc = 0x4de0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4de0e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4de0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4de0e4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4de0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4de0e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4de0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4de0ec: 0x34630300  ori         $v1, $v1, 0x300
    ctx->pc = 0x4de0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x4de0f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4de0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4de0f4: 0x2645011c  addiu       $a1, $s2, 0x11C
    ctx->pc = 0x4de0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x4de0f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4de0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4de0fc: 0x26101134  addiu       $s0, $s0, 0x1134
    ctx->pc = 0x4de0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4404));
    // 0x4de100: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4de100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4de104: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x4de104u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4de108: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4de108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4de10c: 0x26510018  addiu       $s1, $s2, 0x18
    ctx->pc = 0x4de10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4de110: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4de110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4de114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4de114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4de118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4de118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4de11c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4de11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4de120: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4de120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de124: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4de124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4de128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4de128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4de12c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4DE12Cu;
    SET_GPR_U32(ctx, 31, 0x4DE134u);
    ctx->pc = 0x4DE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE12Cu;
    // 0x4de130: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4DE12Cu, 0x4DE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE134u;
label_4de134:
    // 0x4de134: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4de134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4de138: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4de138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4de13c: 0x2455112c  addiu       $s5, $v0, 0x112C
    ctx->pc = 0x4de13cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4396));
    // 0x4de140: 0x24771130  addiu       $s7, $v1, 0x1130
    ctx->pc = 0x4de140u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4400));
    // 0x4de144: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4de144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4de148: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4de148u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F112Cu));
    // 0x4de14c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4de14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4de150: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4de150u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1130u));
    // 0x4de154: 0x344204fd  ori         $v0, $v0, 0x4FD
    ctx->pc = 0x4de154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1277);
    // 0x4de158: 0x346304f2  ori         $v1, $v1, 0x4F2
    ctx->pc = 0x4de158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1266);
    // 0x4de15c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4de15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4de160: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4de160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4de164: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4de164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4de168: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4de168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4de16c: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4de16cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4de170: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4de170u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4de174: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4de174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de178: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4de178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de17c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DE17Cu;
    SET_GPR_U32(ctx, 31, 0x4DE184u);
    ctx->pc = 0x4DE180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE17Cu;
    // 0x4de180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DE17Cu, 0x4DE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE184u;
label_4de184:
    // 0x4de184: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4de184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de188: 0x86420162  lh          $v0, 0x162($s2)
    ctx->pc = 0x4de188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4de18c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de190: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de194: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de198: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de19c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DE19Cu;
    SET_GPR_U32(ctx, 31, 0x4DE1A4u);
    ctx->pc = 0x4DE1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE19Cu;
    // 0x4de1a0: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DE19Cu, 0x4DE1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE1A4u;
label_4de1a4:
    // 0x4de1a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4de1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4de1a8: 0x24761124  addiu       $s6, $v1, 0x1124
    ctx->pc = 0x4de1a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4388));
    // 0x4de1ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4de1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de1b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4de1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4de1b4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4de1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1124u, _value); } while (0);
    // 0x4de1b8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4de1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4de1bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4de1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de1c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4de1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4de1c4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE1C4u;
    SET_GPR_U32(ctx, 31, 0x4DE1CCu);
    ctx->pc = 0x4DE1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE1C4u;
    // 0x4de1c8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE1C4u, 0x4DE1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE1CCu;
label_4de1cc:
    // 0x4de1cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4de1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de1d0: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4de1d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4de1d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4de1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de1d8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de1dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4de1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de1e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4de1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4de1e4: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4de1e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de1e8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4de1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4de1ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de1f0: 0x86420166  lh          $v0, 0x166($s2)
    ctx->pc = 0x4de1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
    // 0x4de1f4: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x4de1f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de1f8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de1fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de200: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de204: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4de204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de208: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4de208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4de20c: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x4de20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4de210: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4de210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4de214: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4de214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4de218: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4de218u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4de21c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE21Cu;
    SET_GPR_U32(ctx, 31, 0x4DE224u);
    ctx->pc = 0x4DE220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE21Cu;
    // 0x4de220: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE21Cu, 0x4DE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE224u;
label_4de224:
    // 0x4de224: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE224u;
    SET_GPR_U32(ctx, 31, 0x4DE22Cu);
    ctx->pc = 0x4DE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE224u;
    // 0x4de228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE224u, 0x4DE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE22Cu;
label_4de22c:
    // 0x4de22c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4de22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4de230: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4de230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4de234: 0x24a51138  addiu       $a1, $a1, 0x1138
    ctx->pc = 0x4de234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4408));
    // 0x4de238: 0x24e7113c  addiu       $a3, $a3, 0x113C
    ctx->pc = 0x4de238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4412));
    // 0x4de23c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4de23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de240: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4de240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F113Cu));
    // 0x4de244: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4de244u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4de248: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4de248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de24c: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x4de24cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4de250: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4de250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1138u));
    // 0x4de254: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de258: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x4de258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4de25c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4de25cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4de260: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4de260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4de264: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4de264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4de268: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4de268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4de26c: 0x258c1140  addiu       $t4, $t4, 0x1140
    ctx->pc = 0x4de26cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4416));
    // 0x4de270: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4de270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4de274: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4de274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4de278: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4de278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4de27c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4de27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de280: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4de280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4de284: 0x8565011a  lh          $a1, 0x11A($t3)
    ctx->pc = 0x4de284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 282)));
    // 0x4de288: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4de288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de28c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4de28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de290: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4de290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4de294: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de298: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4de298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4de29c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4de29cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4de2a0: 0x85620122  lh          $v0, 0x122($t3)
    ctx->pc = 0x4de2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 290)));
    // 0x4de2a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4de2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4de2a8: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4de2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4de2ac: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4de2acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4de2b0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE2B0u;
    SET_GPR_U32(ctx, 31, 0x4DE2B8u);
    ctx->pc = 0x4DE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE2B0u;
    // 0x4de2b4: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE2B0u, 0x4DE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE2B8u;
label_4de2b8:
    // 0x4de2b8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE2B8u;
    SET_GPR_U32(ctx, 31, 0x4DE2C0u);
    ctx->pc = 0x4DE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE2B8u;
    // 0x4de2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE2B8u, 0x4DE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE2C0u;
label_4de2c0:
    // 0x4de2c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4de2c4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4de2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de2c8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4de2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4de2cc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4de2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4de2d0: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x4de2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x4de2d4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4de2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4de2d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4de2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4de2dc: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x4de2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x4de2e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4de2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1128u, _value); } while (0);
    // 0x4de2e4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4de2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4de2e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de2ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4de2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4de2f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4de2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4de2f4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4de2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de2f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de2fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4de300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4de304: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4de304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4de308: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4de308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4de30c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4de30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4de310: 0xae430124  sw          $v1, 0x124($s2)
    ctx->pc = 0x4de310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 3));
    // 0x4de314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de318: 0xae42012c  sw          $v0, 0x12C($s2)
    ctx->pc = 0x4de318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 2));
    // 0x4de31c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4de31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de320: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4de320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4de324: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4de324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de328: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de32c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4de32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4de330: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4de330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4de334: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4de334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4de338: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de33c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4de33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4de340: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4de340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4de344: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4de344u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4de348: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4de348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4de34c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4de34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de350: 0x86420138  lh          $v0, 0x138($s2)
    ctx->pc = 0x4de350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x4de354: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de358: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de35c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de360: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de364: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DE364u;
    SET_GPR_U32(ctx, 31, 0x4DE36Cu);
    ctx->pc = 0x4DE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE364u;
    // 0x4de368: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DE364u, 0x4DE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE36Cu;
label_4de36c:
    // 0x4de36c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4de36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de370: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4de370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4de374: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE374u;
    SET_GPR_U32(ctx, 31, 0x4DE37Cu);
    ctx->pc = 0x4DE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE374u;
    // 0x4de378: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE374u, 0x4DE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE37Cu;
label_4de37c:
    // 0x4de37c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4de37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de380: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4de380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de388: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4DE388u;
    SET_GPR_U32(ctx, 31, 0x4DE390u);
    ctx->pc = 0x4DE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE388u;
    // 0x4de38c: 0x8ec70000  lw          $a3, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4DE388u, 0x4DE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE390u;
label_4de390:
    // 0x4de390: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4de390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de394: 0x86420136  lh          $v0, 0x136($s2)
    ctx->pc = 0x4de394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 310)));
    // 0x4de398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de39c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de3a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de3a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de3a8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DE3A8u;
    SET_GPR_U32(ctx, 31, 0x4DE3B0u);
    ctx->pc = 0x4DE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE3A8u;
    // 0x4de3ac: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DE3A8u, 0x4DE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE3B0u;
label_4de3b0:
    // 0x4de3b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4de3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de3b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4de3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4de3b8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DE3B8u;
    SET_GPR_U32(ctx, 31, 0x4DE3C0u);
    ctx->pc = 0x4DE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE3B8u;
    // 0x4de3bc: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DE3B8u, 0x4DE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE3C0u;
label_4de3c0:
    // 0x4de3c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4de3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de3c4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4de3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de3cc: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4DE3CCu;
    SET_GPR_U32(ctx, 31, 0x4DE3D4u);
    ctx->pc = 0x4DE3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE3CCu;
    // 0x4de3d0: 0x8ec70000  lw          $a3, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4DE3CCu, 0x4DE3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE3D4u;
label_4de3d4:
    // 0x4de3d4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4de3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4de3d8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4de3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4de3dc: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x4de3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4de3e0: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x4de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x4de3e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de3e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4de3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4de3ec: 0x26460128  addiu       $a2, $s2, 0x128
    ctx->pc = 0x4de3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x4de3f0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4de3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4de3f4: 0x264701ba  addiu       $a3, $s2, 0x1BA
    ctx->pc = 0x4de3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 442));
    // 0x4de3f8: 0x8485011e  lh          $a1, 0x11E($a0)
    ctx->pc = 0x4de3f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x4de3fc: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4de3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4de400: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4de400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4de404: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de408: 0x942024  and         $a0, $a0, $s4
    ctx->pc = 0x4de408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x4de40c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de410: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x4de410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4de414: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4de414u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4de418: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4de418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4de41c: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4de41cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4de420: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4de420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4de424: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4de424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de428: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4de428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4de42c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de430: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de434: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4de434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4de438: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4de438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4de43c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4de43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4de440: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4de440u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4de444: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4de444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4de448: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4de448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de44c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4de44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4de450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4de450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4de454: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4de454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4de458: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de45c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4de45cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4de460: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4de460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4de464: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4de464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de468: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4de468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4de46c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4de46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4de470: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4de470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4de474: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de478: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4de478u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4de47c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4de47cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4de480: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4de480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4de484: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4de484u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de488: 0x864201b8  lh          $v0, 0x1B8($s2)
    ctx->pc = 0x4de488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x4de48c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4DE48Cu;
    {
        const bool branch_taken_0x4de48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE48Cu;
        // 0x4de490: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de48c) {
            ctx->pc = 0x4DE540u;
            goto label_4de540;
        }
    }
    ctx->pc = 0x4DE494u;
    // 0x4de494: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4de494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de498: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de49c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de4a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de4a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de4a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de4ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de4b0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4de4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de4b4: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x4de4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x4de4b8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4de4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4de4bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de4c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4de4c4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4de4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de4c8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4DE4C8u;
    {
        const bool branch_taken_0x4de4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4C8u;
        // 0x4de4cc: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de4c8) {
            ctx->pc = 0x4DE544u;
            goto label_4de544;
        }
    }
    ctx->pc = 0x4DE4D0u;
    // 0x4de4d0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4de4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4de4d4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4de4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4de4d8: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4de4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4de4dc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4de4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4de4e0: 0xa6002330  sh          $zero, 0x2330($s0)
    ctx->pc = 0x4de4e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4de4e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4de4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de4e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4de4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de4ec: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4de4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de4f0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4de4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4de4f4: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de4f8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4de4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4de4fc: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4de4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de500: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4de500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de504: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4de504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4de508: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4de508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4de50c: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4de50cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4de510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4de514: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4de514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4de518: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4de518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4de51c: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4DE51Cu;
    SET_GPR_U32(ctx, 31, 0x4DE524u);
    ctx->pc = 0x4DE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE51Cu;
    // 0x4de520: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4DE51Cu, 0x4DE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE524u;
label_4de524:
    // 0x4de524: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4de524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4de528: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4de528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4de52c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4de52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de530: 0xa603233a  sh          $v1, 0x233A($s0)
    ctx->pc = 0x4de530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de534: 0xa602233c  sh          $v0, 0x233C($s0)
    ctx->pc = 0x4de534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de538: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4DE538u;
    SET_GPR_U32(ctx, 31, 0x4DE540u);
    ctx->pc = 0x4DE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE538u;
    // 0x4de53c: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4DE538u, 0x4DE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE540u;
label_4de540:
    // 0x4de540: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4de540u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4de544:
    // 0x4de544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4de544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de548: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DE548u;
    SET_GPR_U32(ctx, 31, 0x4DE550u);
    ctx->pc = 0x4DE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE548u;
    // 0x4de54c: 0x8d851140  lw          $a1, 0x1140($t4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DE548u, 0x4DE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE550u;
label_4de550:
    // 0x4de550: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4DE550u;
    {
        const bool branch_taken_0x4de550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de550) {
            ctx->pc = 0x4DE554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE550u;
            // 0x4de554: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE590u;
            goto label_4de590;
        }
    }
    ctx->pc = 0x4DE558u;
    // 0x4de558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4de558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de55c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4de55cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4de564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4de568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4de56c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4de56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de570: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4de570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4de574: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4de574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de578: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4de578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4de57c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4de57cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4de580: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4de580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4de584: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DE584u;
    ctx->pc = 0x4DE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE584u;
    // 0x4de588: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DE584u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DE58Cu;
    // 0x4de58c: 0x0  nop
    ctx->pc = 0x4de58cu;
    // NOP
label_4de590:
    // 0x4de590: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4de590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4de594: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x4de594u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4de598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de59c: 0xa64301bc  sh          $v1, 0x1BC($s2)
    ctx->pc = 0x4de59cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 444), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de5a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de5a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4de5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de5a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4de5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de5ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4de5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4de5b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4de5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de5b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4de5b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4de5b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4de5b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de5bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4de5bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4de5c0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4de5c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4de5c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4de5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4de5c8: 0x8137974  j           func_4DE5D0
    ctx->pc = 0x4DE5C8u;
    ctx->pc = 0x4DE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE5C8u;
    // 0x4de5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE5D0u;
    goto label_4de5d0;
    ctx->pc = 0x4DE5D0u;
label_4de5d0:
    // 0x4de5d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4de5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4de5d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4de5d8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4de5dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4de5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4de5e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4de5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4de5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de5e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4de5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4de5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de5f0: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4de5f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4de5f4: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4de5f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4de5f8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4DE5F8u;
    SET_GPR_U32(ctx, 31, 0x4DE600u);
    ctx->pc = 0x4DE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE5F8u;
    // 0x4de5fc: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4DE5F8u, 0x4DE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE600u;
label_4de600:
    // 0x4de600: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4DE600u;
    SET_GPR_U32(ctx, 31, 0x4DE608u);
    ctx->pc = 0x4DE604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE600u;
    // 0x4de604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4DE600u, 0x4DE608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE608u;
label_4de608:
    // 0x4de608: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DE608u;
    SET_GPR_U32(ctx, 31, 0x4DE610u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DE608u, 0x4DE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE610u;
label_4de610:
    // 0x4de610: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4de610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4de614: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4de614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4de618: 0xa60301c2  sh          $v1, 0x1C2($s0)
    ctx->pc = 0x4de618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4de61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de620: 0xa603014a  sh          $v1, 0x14A($s0)
    ctx->pc = 0x4de620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4de624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de628: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4de628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4de62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de630: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4de630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4de634: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4de634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de638: 0x8137990  j           func_4DE640
    ctx->pc = 0x4DE638u;
    ctx->pc = 0x4DE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE638u;
    // 0x4de63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE640u;
    goto label_4de640;
    ctx->pc = 0x4DE640u;
label_4de640:
    // 0x4de640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4de644: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4de644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de64c: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4de64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4de650: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4de650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4de654: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4de654u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4de658: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4de658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4de65c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4de65cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4de660: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DE660u;
    {
        const bool branch_taken_0x4de660 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE660u;
        // 0x4de664: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de660) {
            ctx->pc = 0x4DE678u;
            goto label_4de678;
        }
    }
    ctx->pc = 0x4DE668u;
    // 0x4de668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de66c: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DE66Cu;
    ctx->pc = 0x4DE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE66Cu;
    // 0x4de670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DE66Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DE674u;
    // 0x4de674: 0x0  nop
    ctx->pc = 0x4de674u;
    // NOP
label_4de678:
    // 0x4de678: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4de678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de680: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4de680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4de684: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4de684u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de688: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DE688u;
    ctx->pc = 0x4DE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE688u;
    // 0x4de68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DE688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DE690u;
label_4de690:
    // 0x4de690: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4de690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4de694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4de698: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4de698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4de69c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4de69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4de6a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4de6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4de6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de6a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4de6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4de6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de6b0: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4de6b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4de6b4: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4de6b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4de6b8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4DE6B8u;
    SET_GPR_U32(ctx, 31, 0x4DE6C0u);
    ctx->pc = 0x4DE6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE6B8u;
    // 0x4de6bc: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4DE6B8u, 0x4DE6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE6C0u;
label_4de6c0:
    // 0x4de6c0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4DE6C0u;
    SET_GPR_U32(ctx, 31, 0x4DE6C8u);
    ctx->pc = 0x4DE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE6C0u;
    // 0x4de6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4DE6C0u, 0x4DE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE6C8u;
label_4de6c8:
    // 0x4de6c8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DE6C8u;
    SET_GPR_U32(ctx, 31, 0x4DE6D0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DE6C8u, 0x4DE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE6D0u;
label_4de6d0:
    // 0x4de6d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4de6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4de6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de6dc: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DE6DCu;
    ctx->pc = 0x4DE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE6DCu;
    // 0x4de6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DE6E4u;
    // 0x4de6e4: 0x0  nop
    ctx->pc = 0x4de6e4u;
    // NOP
    ctx->pc = 0x4de6e8u;
}
