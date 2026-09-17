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

// Function: sub_004B98F8
// Address: 0x4b98f8 - 0x4ba428
void sub_004B98F8_0x4b98f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B98F8_0x4b98f8");
#endif

    switch (ctx->pc) {
        case 0x4b98fcu: goto label_4b98fc;
        case 0x4b9910u: goto label_4b9910;
        case 0x4b9b48u: goto label_4b9b48;
        case 0x4b9b58u: goto label_4b9b58;
        case 0x4b9b6cu: goto label_4b9b6c;
        case 0x4b9bb0u: goto label_4b9bb0;
        case 0x4b9bc0u: goto label_4b9bc0;
        case 0x4b9bd4u: goto label_4b9bd4;
        case 0x4b9c18u: goto label_4b9c18;
        case 0x4b9c28u: goto label_4b9c28;
        case 0x4b9c3cu: goto label_4b9c3c;
        case 0x4b9c74u: goto label_4b9c74;
        case 0x4b9c84u: goto label_4b9c84;
        case 0x4b9c98u: goto label_4b9c98;
        case 0x4b9d0cu: goto label_4b9d0c;
        case 0x4b9db0u: goto label_4b9db0;
        case 0x4b9dc4u: goto label_4b9dc4;
        case 0x4b9df0u: goto label_4b9df0;
        case 0x4b9e90u: goto label_4b9e90;
        case 0x4b9ee0u: goto label_4b9ee0;
        case 0x4b9f5cu: goto label_4b9f5c;
        case 0x4b9f78u: goto label_4b9f78;
        case 0x4ba034u: goto label_4ba034;
        case 0x4ba044u: goto label_4ba044;
        case 0x4ba1e0u: goto label_4ba1e0;
        case 0x4ba1f0u: goto label_4ba1f0;
        case 0x4ba204u: goto label_4ba204;
        case 0x4ba224u: goto label_4ba224;
        case 0x4ba234u: goto label_4ba234;
        case 0x4ba248u: goto label_4ba248;
        case 0x4ba268u: goto label_4ba268;
        case 0x4ba278u: goto label_4ba278;
        case 0x4ba28cu: goto label_4ba28c;
        case 0x4ba314u: goto label_4ba314;
        case 0x4ba31cu: goto label_4ba31c;
        case 0x4ba324u: goto label_4ba324;
        case 0x4ba360u: goto label_4ba360;
        case 0x4ba3d0u: goto label_4ba3d0;
        case 0x4ba410u: goto label_4ba410;
        default: break;
    }

    ctx->pc = 0x4b98f8u;

    // 0x4b98f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b98f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b98fc:
    // 0x4b98fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b98fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b9900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9904: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9904u;
        // 0x4b9908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B990Cu;
    // 0x4b990c: 0x0  nop
    ctx->pc = 0x4b990cu;
    // NOP
label_4b9910:
    // 0x4b9910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b9914: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b991c: 0x24510db8  addiu       $s1, $v0, 0xDB8
    ctx->pc = 0x4b991cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3512));
    // 0x4b9920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b9920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b9924: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4b9924u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b992c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b992cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b9934: 0x2663015e  addiu       $v1, $s3, 0x15E
    ctx->pc = 0x4b9934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4b9938: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b9938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b993c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b9940: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b9940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b9944: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b9944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b9948: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b994c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b9950: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b9950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b9954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b9954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b9958: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b9958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b995c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b995cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b9960: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b9964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9968: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b996c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9970: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9974: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b997c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b997cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9980: 0x96650164  lhu         $a1, 0x164($s3)
    ctx->pc = 0x4b9980u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4b9984: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b9984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b9988: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b9988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b998c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b998cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9990: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9994: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4b9994u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9998: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4b9998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4b999c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b999cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b99a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B99A0u;
    {
        const bool branch_taken_0x4b99a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B99A0u;
        // 0x4b99a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b99a0) {
            ctx->pc = 0x4B99D8u;
            goto label_4b99d8;
        }
    }
    ctx->pc = 0x4B99A8u;
    // 0x4b99a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b99a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b99ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b99acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b99b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b99b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b99b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b99b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b99b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b99b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b99bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b99bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b99c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b99c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b99c4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b99c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b99c8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b99c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b99cc: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B99CCu;
    ctx->pc = 0x4B99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B99CCu;
    // 0x4b99d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B99D4u;
    // 0x4b99d4: 0x0  nop
    ctx->pc = 0x4b99d4u;
    // NOP
label_4b99d8:
    // 0x4b99d8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b99dc: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4b99dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4b99e0: 0x8c460dd4  lw          $a2, 0xDD4($v0)
    ctx->pc = 0x4b99e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0DD4u));
    // 0x4b99e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b99e8: 0x24560dc0  addiu       $s6, $v0, 0xDC0
    ctx->pc = 0x4b99e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x4b99ec: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4b99ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4b99f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b99f4: 0x27d50dc4  addiu       $s5, $fp, 0xDC4
    ctx->pc = 0x4b99f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3524));
    // 0x4b99f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4b99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DC0u));
    // 0x4b99fc: 0x26f40dc8  addiu       $s4, $s7, 0xDC8
    ctx->pc = 0x4b99fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 3528));
    // 0x4b9a00: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9a04: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4b9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b9a08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9a10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9a14: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4b9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b9a18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9a1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b9a20: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b9a24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9a28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b9a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b9a2c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b9a2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b9a30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4b9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4b9a34: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4b9a34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b9a38: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9a3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9a3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9a40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9a44: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b9a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b9a48: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4b9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4b9a4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b9a50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4b9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b9a54: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4b9a54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b9a58: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9a5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9a5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9a60: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9a64: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b9a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b9a68: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b9a6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b9a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b9a70: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4b9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4b9a74: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4b9a74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b9a78: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9a7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9a80: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4b9a80u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b9a84: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4b9a84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4b9a88: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4b9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4b9a8c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b9a90: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4b9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4b9a94: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9a98: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9a98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9a9c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4b9a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b9aa0: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4b9aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4b9aa4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b9aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b9aa8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4b9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4b9aac: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4b9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4b9ab0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b9ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b9ab4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9ab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9ab8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4b9ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b9abc: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4b9abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4b9ac0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4b9ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b9ac4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b9ac8: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4b9ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4b9acc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9ad0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b9ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b9ad4: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4b9ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4b9ad8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b9ad8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b9adc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b9adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9ae0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4b9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4b9ae4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9ae8: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4b9ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b9aec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9af0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4b9af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9af4: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x4b9af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4b9af8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4B9AF8u;
    {
        const bool branch_taken_0x4b9af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9af8) {
            ctx->pc = 0x4B9AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9AF8u;
            // 0x4b9afc: 0x8662011c  lh          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9BE0u;
            goto label_4b9be0;
        }
    }
    ctx->pc = 0x4B9B00u;
    // 0x4b9b00: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x4b9b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4b9b04: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B9B04u;
    {
        const bool branch_taken_0x4b9b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9b04) {
            ctx->pc = 0x4B9B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9B04u;
            // 0x4b9b08: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9B78u;
            goto label_4b9b78;
        }
    }
    ctx->pc = 0x4B9B0Cu;
    // 0x4b9b0c: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x4b9b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4b9b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9b14: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b9b14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b9b18: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9b1c: 0x26100dbc  addiu       $s0, $s0, 0xDBC
    ctx->pc = 0x4b9b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3516));
    // 0x4b9b20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9b24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9b28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9b2c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b9b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9b30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b9b34: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9b38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9b3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9b40: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B9B40u;
    SET_GPR_U32(ctx, 31, 0x4B9B48u);
    ctx->pc = 0x4B9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B40u;
    // 0x4b9b44: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B9B40u, 0x4B9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B48u;
label_4b9b48:
    // 0x4b9b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b9b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9b4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b9b50: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B9B50u;
    SET_GPR_U32(ctx, 31, 0x4B9B58u);
    ctx->pc = 0x4B9B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B50u;
    // 0x4b9b54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B9B50u, 0x4B9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B58u;
label_4b9b58:
    // 0x4b9b58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4b9b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9b5c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b9b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9b60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b9b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9b64: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4B9B64u;
    SET_GPR_U32(ctx, 31, 0x4B9B6Cu);
    ctx->pc = 0x4B9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B64u;
    // 0x4b9b68: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4B9B64u, 0x4B9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B6Cu;
label_4b9b6c:
    // 0x4b9b6c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4B9B6Cu;
    {
        const bool branch_taken_0x4b9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9B6Cu;
        // 0x4b9b70: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9b6c) {
            ctx->pc = 0x4B9C9Cu;
            goto label_4b9c9c;
        }
    }
    ctx->pc = 0x4B9B74u;
    // 0x4b9b74: 0x0  nop
    ctx->pc = 0x4b9b74u;
    // NOP
label_4b9b78:
    // 0x4b9b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9b7c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b9b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b9b80: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9b84: 0x26100dbc  addiu       $s0, $s0, 0xDBC
    ctx->pc = 0x4b9b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3516));
    // 0x4b9b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9b8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9b90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9b94: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b9b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9b98: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b9b9c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9ba0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9ba4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9ba8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B9BA8u;
    SET_GPR_U32(ctx, 31, 0x4B9BB0u);
    ctx->pc = 0x4B9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9BA8u;
    // 0x4b9bac: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B9BA8u, 0x4B9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BB0u;
label_4b9bb0:
    // 0x4b9bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9bb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b9bb8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B9BB8u;
    SET_GPR_U32(ctx, 31, 0x4B9BC0u);
    ctx->pc = 0x4B9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9BB8u;
    // 0x4b9bbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B9BB8u, 0x4B9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BC0u;
label_4b9bc0:
    // 0x4b9bc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9bc4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b9bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9bc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b9bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9bcc: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B9BCCu;
    SET_GPR_U32(ctx, 31, 0x4B9BD4u);
    ctx->pc = 0x4B9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9BCCu;
    // 0x4b9bd0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B9BCCu, 0x4B9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BD4u;
label_4b9bd4:
    // 0x4b9bd4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4B9BD4u;
    {
        const bool branch_taken_0x4b9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9BD4u;
        // 0x4b9bd8: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9bd4) {
            ctx->pc = 0x4B9C9Cu;
            goto label_4b9c9c;
        }
    }
    ctx->pc = 0x4B9BDCu;
    // 0x4b9bdc: 0x0  nop
    ctx->pc = 0x4b9bdcu;
    // NOP
label_4b9be0:
    // 0x4b9be0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9be4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b9be4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b9be8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9bec: 0x26100dbc  addiu       $s0, $s0, 0xDBC
    ctx->pc = 0x4b9becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3516));
    // 0x4b9bf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9bf4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9bf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9bfc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b9bfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9c00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b9c04: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9c08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9c0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9c10: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B9C10u;
    SET_GPR_U32(ctx, 31, 0x4B9C18u);
    ctx->pc = 0x4B9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C10u;
    // 0x4b9c14: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B9C10u, 0x4B9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C18u;
label_4b9c18:
    // 0x4b9c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b9c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b9c20: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B9C20u;
    SET_GPR_U32(ctx, 31, 0x4B9C28u);
    ctx->pc = 0x4B9C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C20u;
    // 0x4b9c24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B9C20u, 0x4B9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C28u;
label_4b9c28:
    // 0x4b9c28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4b9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c2c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b9c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9c30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b9c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c34: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B9C34u;
    SET_GPR_U32(ctx, 31, 0x4B9C3Cu);
    ctx->pc = 0x4B9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C34u;
    // 0x4b9c38: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B9C34u, 0x4B9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C3Cu;
label_4b9c3c:
    // 0x4b9c3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9c40: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4b9c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4b9c44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9c48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9c4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9c50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9c58: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b9c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9c5c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b9c60: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4b9c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4b9c64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9c68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9c6c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B9C6Cu;
    SET_GPR_U32(ctx, 31, 0x4B9C74u);
    ctx->pc = 0x4B9C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C6Cu;
    // 0x4b9c70: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B9C6Cu, 0x4B9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C74u;
label_4b9c74:
    // 0x4b9c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b9c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b9c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b9c7c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B9C7Cu;
    SET_GPR_U32(ctx, 31, 0x4B9C84u);
    ctx->pc = 0x4B9C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C7Cu;
    // 0x4b9c80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B9C7Cu, 0x4B9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C84u;
label_4b9c84:
    // 0x4b9c84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b9c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c88: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b9c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9c8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b9c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c90: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B9C90u;
    SET_GPR_U32(ctx, 31, 0x4B9C98u);
    ctx->pc = 0x4B9C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C90u;
    // 0x4b9c94: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B9C90u, 0x4B9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C98u;
label_4b9c98:
    // 0x4b9c98: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4b9c98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4b9c9c:
    // 0x4b9c9c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9ca0: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4b9ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4b9ca4: 0x94470dc0  lhu         $a3, 0xDC0($v0)
    ctx->pc = 0x4b9ca4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F0DC0u));
    // 0x4b9ca8: 0x97c50dc4  lhu         $a1, 0xDC4($fp)
    ctx->pc = 0x4b9ca8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3524)));
    // 0x4b9cac: 0x26282494  addiu       $t0, $s1, 0x2494
    ctx->pc = 0x4b9cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4b9cb0: 0x96e60dc8  lhu         $a2, 0xDC8($s7)
    ctx->pc = 0x4b9cb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3528)));
    // 0x4b9cb4: 0x26292498  addiu       $t1, $s1, 0x2498
    ctx->pc = 0x4b9cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4b9cb8: 0x262a249c  addiu       $t2, $s1, 0x249C
    ctx->pc = 0x4b9cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4b9cbc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b9cc0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b9cc4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b9cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9cc8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b9ccc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4b9cccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b9cd0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b9cd4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4b9cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b9cd8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b9cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b9cdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b9ce0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b9ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b9ce4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b9ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b9ce8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b9ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b9cec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9cf0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4b9cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4b9cf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b9cf8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b9cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b9cfc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b9d00: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b9d04: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B9D04u;
    SET_GPR_U32(ctx, 31, 0x4B9D0Cu);
    ctx->pc = 0x4B9D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D04u;
    // 0x4b9d08: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B9D04u, 0x4B9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D0Cu;
label_4b9d0c:
    // 0x4b9d0c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9d10: 0x24440db8  addiu       $a0, $v0, 0xDB8
    ctx->pc = 0x4b9d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3512));
    // 0x4b9d14: 0x862224a0  lh          $v0, 0x24A0($s1)
    ctx->pc = 0x4b9d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4b9d18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DB8u));
    // 0x4b9d1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9d20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9d24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9d28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b9d2c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b9d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b9d30: 0x2442f556  addiu       $v0, $v0, -0xAAA
    ctx->pc = 0x4b9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964566));
    // 0x4b9d34: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B9D34u;
    {
        const bool branch_taken_0x4b9d34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b9d34) {
            ctx->pc = 0x4B9D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9D34u;
            // 0x4b9d38: 0x266301bc  addiu       $v1, $s3, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9D70u;
            goto label_4b9d70;
        }
    }
    ctx->pc = 0x4B9D3Cu;
    // 0x4b9d3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b9d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b9d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b9d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b9d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b9d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9d4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b9d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9d50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b9d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9d54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b9d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b9d58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b9d58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9d5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b9d5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b9d60: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b9d60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9d64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b9d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b9d68: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9D68u;
    ctx->pc = 0x4B9D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D68u;
    // 0x4b9d6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B9D70u;
label_4b9d70:
    // 0x4b9d70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9d74: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b9d74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b9d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b9d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9d7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b9d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9d80: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b9d84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b9d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9d88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b9d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b9d8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b9d8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9d90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b9d90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b9d94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b9d94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9d98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b9d98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b9d9c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b9d9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9da0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b9da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b9da4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b9da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9da8: 0x812e76c  j           func_4B9DB0
    ctx->pc = 0x4B9DA8u;
    ctx->pc = 0x4B9DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DA8u;
    // 0x4b9dac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9DB0u;
    goto label_4b9db0;
    ctx->pc = 0x4B9DB0u;
label_4b9db0:
    // 0x4b9db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b9db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b9db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b9db8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b9dbc: 0xc12e90a  jal         func_4BA428
    ctx->pc = 0x4B9DBCu;
    SET_GPR_U32(ctx, 31, 0x4B9DC4u);
    ctx->pc = 0x4B9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DBCu;
    // 0x4b9dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA428u, 0x4B9DBCu, 0x4B9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DC4u;
label_4b9dc4:
    // 0x4b9dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4b9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4b9dc8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4b9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4b9dcc: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4b9dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9dd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b9dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9dd8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b9dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b9ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b9ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9de0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b9de4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b9de4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9de8: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9DE8u;
    ctx->pc = 0x4B9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DE8u;
    // 0x4b9dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B9DF0u;
label_4b9df0:
    // 0x4b9df0: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4b9df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4b9df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b9df8: 0x24c66ed8  addiu       $a2, $a2, 0x6ED8
    ctx->pc = 0x4b9df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28376));
    // 0x4b9dfc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b9e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b9e04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4b9e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e08: 0xac460dcc  sw          $a2, 0xDCC($v0)
    ctx->pc = 0x4b9e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0DCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DCCu, _value); } while (0);
    // 0x4b9e0c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b9e10: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x4b9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x4b9e14: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b9e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9e18: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x4b9e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4b9e1c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x4b9e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4b9e20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DB8u));
    // 0x4b9e24: 0x24e901bc  addiu       $t1, $a3, 0x1BC
    ctx->pc = 0x4b9e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4b9e28: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x4b9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x4b9e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9e30: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b9e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b9e34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9e38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9e3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b9e40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9e44: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b9e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b9e48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b9e4c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b9e50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9e54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b9e58: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b9e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b9e5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b9e60: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b9e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b9e64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b9e68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4b9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b9e6c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4b9e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b9e70: 0xa4ea014a  sh          $t2, 0x14A($a3)
    ctx->pc = 0x4b9e70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 10));
    // 0x4b9e74: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x4b9e74u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b9e78: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4b9e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b9e7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b9e80: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4b9e80u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9e84: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9E84u;
    ctx->pc = 0x4B9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E84u;
    // 0x4b9e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B9E8Cu;
    // 0x4b9e8c: 0x0  nop
    ctx->pc = 0x4b9e8cu;
    // NOP
label_4b9e90:
    // 0x4b9e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b9e94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b9e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b9e9c: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4b9e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4b9ea0: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4b9ea4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b9ea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b9ea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b9eac: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4b9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b9eb0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9EB0u;
    {
        const bool branch_taken_0x4b9eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9EB0u;
        // 0x4b9eb4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9eb0) {
            ctx->pc = 0x4B9EC8u;
            goto label_4b9ec8;
        }
    }
    ctx->pc = 0x4B9EB8u;
    // 0x4b9eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9ebc: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9EBCu;
    ctx->pc = 0x4B9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EBCu;
    // 0x4b9ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B9EC4u;
    // 0x4b9ec4: 0x0  nop
    ctx->pc = 0x4b9ec4u;
    // NOP
label_4b9ec8:
    // 0x4b9ec8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b9ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b9ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9ed0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b9ed4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4b9ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9ed8: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9ED8u;
    ctx->pc = 0x4B9EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9ED8u;
    // 0x4b9edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4B9EE0u;
label_4b9ee0:
    // 0x4b9ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b9ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b9ee4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b9ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b9ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b9eec: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b9eecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b9ef0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b9ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b9ef4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b9ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b9ef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b9ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b9efc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b9efcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b9f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b9f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b9f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b9f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b9f0c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4b9f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9f10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4b9f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4b9f14: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4b9f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4b9f18: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b9f18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b9f1c: 0x26310db8  addiu       $s1, $s1, 0xDB8
    ctx->pc = 0x4b9f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3512));
    // 0x4b9f20: 0x96620162  lhu         $v0, 0x162($s3)
    ctx->pc = 0x4b9f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 354)));
    // 0x4b9f24: 0x26520dbc  addiu       $s2, $s2, 0xDBC
    ctx->pc = 0x4b9f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3516));
    // 0x4b9f28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b9f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4b9f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f30: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4b9f30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4b9f34: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x4b9f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x4b9f38: 0x8c640dc0  lw          $a0, 0xDC0($v1)
    ctx->pc = 0x4b9f38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0DC0u));
    // 0x4b9f3c: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4b9f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4b9f40: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x4b9f40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x4b9f44: 0x8d050dc4  lw          $a1, 0xDC4($t0)
    ctx->pc = 0x4b9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0DC4u));
    // 0x4b9f48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4b9f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f4c: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4b9f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4b9f50: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x4b9f50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x4b9f54: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B9F54u;
    SET_GPR_U32(ctx, 31, 0x4B9F5Cu);
    ctx->pc = 0x4B9F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F54u;
    // 0x4b9f58: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B9F54u, 0x4B9F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F5Cu;
label_4b9f5c:
    // 0x4b9f5c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b9f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9f60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b9f60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b9f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f68: 0xa603233c  sh          $v1, 0x233C($s0)
    ctx->pc = 0x4b9f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b9f6c: 0xa602233a  sh          $v0, 0x233A($s0)
    ctx->pc = 0x4b9f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b9f70: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4B9F70u;
    SET_GPR_U32(ctx, 31, 0x4B9F78u);
    ctx->pc = 0x4B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F70u;
    // 0x4b9f74: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4B9F70u, 0x4B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F78u;
label_4b9f78:
    // 0x4b9f78: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4b9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4b9f7c: 0x24a56ed8  addiu       $a1, $a1, 0x6ED8
    ctx->pc = 0x4b9f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
    // 0x4b9f80: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9f84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9f88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b9f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f8c: 0xac450dcc  sw          $a1, 0xDCC($v0)
    ctx->pc = 0x4b9f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0DCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DCCu, _value); } while (0);
    // 0x4b9f90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b9f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9f98: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4b9f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4b9f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b9f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9fa0: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x4b9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x4b9fa4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4b9fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b9fa8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b9fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b9fac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9fb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9fb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9fb8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b9fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9fbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b9fc0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b9fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b9fc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b9fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9fc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9fcc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b9fd0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b9fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b9fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b9fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9fd8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b9fdc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b9fdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b9fe0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b9fe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b9fe8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b9fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b9fec: 0xa66001bc  sh          $zero, 0x1BC($s3)
    ctx->pc = 0x4b9fecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b9ff0: 0xa663000c  sh          $v1, 0xC($s3)
    ctx->pc = 0x4b9ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b9ff4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b9ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b9ff8: 0x812e800  j           func_4BA000
    ctx->pc = 0x4B9FF8u;
    ctx->pc = 0x4B9FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9FF8u;
    // 0x4b9ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    goto label_4ba000;
    ctx->pc = 0x4BA000u;
label_4ba000:
    // 0x4ba000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ba000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ba004: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4ba004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4ba008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba00c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ba00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ba010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ba010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ba014: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ba014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ba018: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ba018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ba01c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ba01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ba020: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ba020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ba024: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ba024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ba028: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4ba028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4ba02c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BA02Cu;
    SET_GPR_U32(ctx, 31, 0x4BA034u);
    ctx->pc = 0x4BA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA02Cu;
    // 0x4ba030: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BA02Cu, 0x4BA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA034u;
label_4ba034:
    // 0x4ba034: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x4BA034u;
    {
        const bool branch_taken_0x4ba034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA034u;
        // 0x4ba038: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba034) {
            ctx->pc = 0x4BA32Cu;
            goto label_4ba32c;
        }
    }
    ctx->pc = 0x4BA03Cu;
    // 0x4ba03c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BA03Cu;
    SET_GPR_U32(ctx, 31, 0x4BA044u);
    ctx->pc = 0x4BA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA03Cu;
    // 0x4ba040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BA03Cu, 0x4BA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA044u;
label_4ba044:
    // 0x4ba044: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x4BA044u;
    {
        const bool branch_taken_0x4ba044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA044u;
        // 0x4ba048: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba044) {
            ctx->pc = 0x4BA32Cu;
            goto label_4ba32c;
        }
    }
    ctx->pc = 0x4BA04Cu;
    // 0x4ba04c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4ba04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4ba050: 0x24840dcc  addiu       $a0, $a0, 0xDCC
    ctx->pc = 0x4ba050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3532));
    // 0x4ba054: 0x24a56ed8  addiu       $a1, $a1, 0x6ED8
    ctx->pc = 0x4ba054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
    // 0x4ba058: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4ba058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4ba05c: 0x27c70008  addiu       $a3, $fp, 0x8
    ctx->pc = 0x4ba05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x4ba060: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ba060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ba064: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ba064u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba068: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x4ba068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x4ba06c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ba06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ba070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ba070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DB8u));
    // 0x4ba074: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4ba074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4ba078: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x4ba078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x4ba07c: 0x24c66f30  addiu       $a2, $a2, 0x6F30
    ctx->pc = 0x4ba07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28464));
    // 0x4ba080: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba088: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba08c: 0x27d70160  addiu       $s7, $fp, 0x160
    ctx->pc = 0x4ba08cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
    // 0x4ba090: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba098: 0x27d60162  addiu       $s6, $fp, 0x162
    ctx->pc = 0x4ba098u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 354));
    // 0x4ba09c: 0x27c80166  addiu       $t0, $fp, 0x166
    ctx->pc = 0x4ba09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 358));
    // 0x4ba0a0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ba0a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba0a4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ba0a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ba0a8: 0x26730dc0  addiu       $s3, $s3, 0xDC0
    ctx->pc = 0x4ba0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3520));
    // 0x4ba0ac: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ba0acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ba0b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4ba0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4ba0b4: 0x26940dc4  addiu       $s4, $s4, 0xDC4
    ctx->pc = 0x4ba0b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3524));
    // 0x4ba0b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba0bc: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ba0bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ba0c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba0c4: 0x26b50dc8  addiu       $s5, $s5, 0xDC8
    ctx->pc = 0x4ba0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3528));
    // 0x4ba0c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba0cc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ba0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ba0d0: 0x26310dbc  addiu       $s1, $s1, 0xDBC
    ctx->pc = 0x4ba0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3516));
    // 0x4ba0d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ba0d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba0d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba0dc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ba0dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ba0e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba0e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ba0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ba0e8: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x4ba0e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ba0ec: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x4ba0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba0f0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4ba0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4ba0f4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ba0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ba0f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ba0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba0fc: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x4ba0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x4ba100: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba104: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba108: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba10c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba110: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba114: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ba114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba118: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4ba118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4ba11c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba120: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba124: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba128: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ba128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba12c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba130: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ba130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ba134: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba138: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ba138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ba13c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ba13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ba140: 0xa7c0015e  sh          $zero, 0x15E($fp)
    ctx->pc = 0x4ba140u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ba144: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ba144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ba148: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ba148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ba14c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ba14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ba150: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4ba150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ba154: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4ba154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4ba158: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4ba158u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba15c: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x4ba15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4ba160: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ba160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ba164: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ba164u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ba168: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x4ba168u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba16c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4ba16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4ba170: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba174: 0xa7c20164  sh          $v0, 0x164($fp)
    ctx->pc = 0x4ba174u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba178: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4ba178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4ba17c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ba17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ba180: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4ba180u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba184: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4ba184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x4ba188: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ba188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba18c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4ba18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ba190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba194: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ba194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ba198: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba19c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ba19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ba1a0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ba1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ba1a4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba1a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba1ac: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4ba1acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4ba1b0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ba1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ba1b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ba1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba1b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba1bc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ba1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ba1c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba1c4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ba1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4ba1c8: 0x87c20120  lh          $v0, 0x120($fp)
    ctx->pc = 0x4ba1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x4ba1cc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba1d0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba1d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ba1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ba1d8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BA1D8u;
    SET_GPR_U32(ctx, 31, 0x4BA1E0u);
    ctx->pc = 0x4BA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1D8u;
    // 0x4ba1dc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BA1D8u, 0x4BA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1E0u;
label_4ba1e0:
    // 0x4ba1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ba1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ba1e8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA1E8u;
    SET_GPR_U32(ctx, 31, 0x4BA1F0u);
    ctx->pc = 0x4BA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1E8u;
    // 0x4ba1ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA1E8u, 0x4BA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1F0u;
label_4ba1f0:
    // 0x4ba1f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ba1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4ba1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba1f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ba1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1fc: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BA1FCu;
    SET_GPR_U32(ctx, 31, 0x4BA204u);
    ctx->pc = 0x4BA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1FCu;
    // 0x4ba200: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BA1FCu, 0x4BA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA204u;
label_4ba204:
    // 0x4ba204: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ba204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba208: 0x87c20118  lh          $v0, 0x118($fp)
    ctx->pc = 0x4ba208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x4ba20c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba210: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba218: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba21c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BA21Cu;
    SET_GPR_U32(ctx, 31, 0x4BA224u);
    ctx->pc = 0x4BA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA21Cu;
    // 0x4ba220: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BA21Cu, 0x4BA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA224u;
label_4ba224:
    // 0x4ba224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba228: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ba228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ba22c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA22Cu;
    SET_GPR_U32(ctx, 31, 0x4BA234u);
    ctx->pc = 0x4BA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA22Cu;
    // 0x4ba230: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA22Cu, 0x4BA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA234u;
label_4ba234:
    // 0x4ba234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ba234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba238: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4ba238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba23c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ba23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba240: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4BA240u;
    SET_GPR_U32(ctx, 31, 0x4BA248u);
    ctx->pc = 0x4BA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA240u;
    // 0x4ba244: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4BA240u, 0x4BA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA248u;
label_4ba248:
    // 0x4ba248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ba248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba24c: 0x87c2011c  lh          $v0, 0x11C($fp)
    ctx->pc = 0x4ba24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 284)));
    // 0x4ba250: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba254: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba258: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba25c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba260: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BA260u;
    SET_GPR_U32(ctx, 31, 0x4BA268u);
    ctx->pc = 0x4BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA260u;
    // 0x4ba264: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BA260u, 0x4BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA268u;
label_4ba268:
    // 0x4ba268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba26c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ba26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ba270: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA270u;
    SET_GPR_U32(ctx, 31, 0x4BA278u);
    ctx->pc = 0x4BA274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA270u;
    // 0x4ba274: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA270u, 0x4BA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA278u;
label_4ba278:
    // 0x4ba278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ba278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba27c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4ba27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba280: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ba280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba284: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4BA284u;
    SET_GPR_U32(ctx, 31, 0x4BA28Cu);
    ctx->pc = 0x4BA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA284u;
    // 0x4ba288: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4BA284u, 0x4BA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA28Cu;
label_4ba28c:
    // 0x4ba28c: 0x27c40124  addiu       $a0, $fp, 0x124
    ctx->pc = 0x4ba28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 292));
    // 0x4ba290: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ba290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba294: 0x27c50128  addiu       $a1, $fp, 0x128
    ctx->pc = 0x4ba294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 296));
    // 0x4ba298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ba298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ba29c: 0x27c7012c  addiu       $a3, $fp, 0x12C
    ctx->pc = 0x4ba29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 300));
    // 0x4ba2a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba2a4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4ba2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4ba2a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba2ac: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ba2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ba2b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba2b4: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4ba2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4ba2b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ba2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ba2bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4ba2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2c0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4ba2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ba2c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ba2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba2c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba2cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba2d0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ba2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ba2d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba2d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ba2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ba2dc: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4ba2dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ba2e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ba2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ba2e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba2e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba2ec: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ba2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ba2f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba2f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4ba2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ba2f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ba2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ba2fc: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4ba2fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ba300: 0xa4c2232e  sh          $v0, 0x232E($a2)
    ctx->pc = 0x4ba300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba304: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4ba304u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ba308: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4ba308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ba30c: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4BA30Cu;
    SET_GPR_U32(ctx, 31, 0x4BA314u);
    ctx->pc = 0x4BA310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA30Cu;
    // 0x4ba310: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4BA30Cu, 0x4BA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA314u;
label_4ba314:
    // 0x4ba314: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BA314u;
    SET_GPR_U32(ctx, 31, 0x4BA31Cu);
    ctx->pc = 0x4BA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA314u;
    // 0x4ba318: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BA314u, 0x4BA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA31Cu;
label_4ba31c:
    // 0x4ba31c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BA31Cu;
    SET_GPR_U32(ctx, 31, 0x4BA324u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BA31Cu, 0x4BA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA324u;
label_4ba324:
    // 0x4ba324: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4ba324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ba328: 0xa7c201bc  sh          $v0, 0x1BC($fp)
    ctx->pc = 0x4ba328u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 444), (uint16_t)GPR_U32(ctx, 2));
label_4ba32c:
    // 0x4ba32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ba330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ba334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ba338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ba33c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ba33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ba340: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ba340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ba344: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ba344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ba348: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ba348u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ba34c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ba34cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ba350: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ba350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ba354: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA354u;
        // 0x4ba358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA35Cu;
    // 0x4ba35c: 0x0  nop
    ctx->pc = 0x4ba35cu;
    // NOP
label_4ba360:
    // 0x4ba360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ba360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ba364: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ba364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ba368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba36c: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x4ba36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x4ba370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ba370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ba374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ba374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ba378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ba37c: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4ba37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4ba380: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ba380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba384: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ba384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba388: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ba388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DB8u));
    // 0x4ba38c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba390: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba398: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ba398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ba39c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba3a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba3a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba3a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4ba3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4ba3a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba3ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ba3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ba3b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ba3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ba3b4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ba3b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba3b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA3B8u;
    {
        const bool branch_taken_0x4ba3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba3b8) {
            ctx->pc = 0x4BA3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA3B8u;
            // 0x4ba3bc: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA3D4u;
            goto label_4ba3d4;
        }
    }
    ctx->pc = 0x4BA3C0u;
    // 0x4ba3c0: 0x96230164  lhu         $v1, 0x164($s1)
    ctx->pc = 0x4ba3c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x4ba3c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ba3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ba3c8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BA3C8u;
    SET_GPR_U32(ctx, 31, 0x4BA3D0u);
    ctx->pc = 0x4BA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA3C8u;
    // 0x4ba3cc: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BA3C8u, 0x4BA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA3D0u;
label_4ba3d0:
    // 0x4ba3d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ba3d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ba3d4:
    // 0x4ba3d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ba3d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4ba3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ba3dc: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4ba3dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4ba3e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BA3E0u;
    {
        const bool branch_taken_0x4ba3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA3E0u;
        // 0x4ba3e4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba3e0) {
            ctx->pc = 0x4BA3F8u;
            goto label_4ba3f8;
        }
    }
    ctx->pc = 0x4BA3E8u;
    // 0x4ba3e8: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4ba3ec: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ba3ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ba3f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ba3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ba3f4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ba3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ba3f8:
    // 0x4ba3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ba3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ba3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba408: 0x812e904  j           func_4BA410
    ctx->pc = 0x4BA408u;
    ctx->pc = 0x4BA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA408u;
    // 0x4ba40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA410u;
    goto label_4ba410;
    ctx->pc = 0x4BA410u;
label_4ba410:
    // 0x4ba410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ba410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ba414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ba414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ba418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ba418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba41c: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4BA41Cu;
    ctx->pc = 0x4BA420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA41Cu;
    // 0x4ba420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BA424u;
    // 0x4ba424: 0x0  nop
    ctx->pc = 0x4ba424u;
    // NOP
    ctx->pc = 0x4ba428u;
}
