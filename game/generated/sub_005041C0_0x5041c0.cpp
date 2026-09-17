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

// Function: sub_005041C0
// Address: 0x5041c0 - 0x5044c0
void sub_005041C0_0x5041c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005041C0_0x5041c0");
#endif

    switch (ctx->pc) {
        case 0x504238u: goto label_504238;
        case 0x504248u: goto label_504248;
        case 0x504254u: goto label_504254;
        case 0x504260u: goto label_504260;
        case 0x5042e8u: goto label_5042e8;
        case 0x504300u: goto label_504300;
        case 0x504314u: goto label_504314;
        case 0x504368u: goto label_504368;
        case 0x504380u: goto label_504380;
        case 0x504394u: goto label_504394;
        case 0x5043e8u: goto label_5043e8;
        case 0x504400u: goto label_504400;
        case 0x504414u: goto label_504414;
        case 0x504468u: goto label_504468;
        case 0x504480u: goto label_504480;
        case 0x504494u: goto label_504494;
        default: break;
    }

    ctx->pc = 0x5041c0u;

label_5041c0:
    // 0x5041c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5041c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5041c4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x5041c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5041c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5041cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5041ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5041d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5041d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5041d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5041d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5041d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5041dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5041dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5041e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5041e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5041e4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x5041e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x5041e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5041e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5041ec: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x5041ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5041f0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x5041f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5041f4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x5041f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5041f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5041fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x5041fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x504200: 0x85280026  lh          $t0, 0x26($t1)
    ctx->pc = 0x504200u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 38)));
    // 0x504204: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x504204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x504208: 0x85220024  lh          $v0, 0x24($t1)
    ctx->pc = 0x504208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x50420c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x50420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x504210: 0x96490000  lhu         $t1, 0x0($s2)
    ctx->pc = 0x504210u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504214: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x504214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x504218: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x504218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50421c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x50421cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x504220: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x504220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x504224: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x504224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x504228: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x504228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50422c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x50422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x504230: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504230u;
    SET_GPR_U32(ctx, 31, 0x504238u);
    ctx->pc = 0x504234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504230u;
    // 0x504234: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504230u, 0x504238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504238u;
label_504238:
    // 0x504238: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x504238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50423c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504240: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504240u;
    SET_GPR_U32(ctx, 31, 0x504248u);
    ctx->pc = 0x504244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504240u;
    // 0x504244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504240u, 0x504248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504248u;
label_504248:
    // 0x504248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50424c: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x50424Cu;
    SET_GPR_U32(ctx, 31, 0x504254u);
    ctx->pc = 0x504250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50424Cu;
    // 0x504250: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x50424Cu, 0x504254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504254u;
label_504254:
    // 0x504254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504258: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504258u;
    SET_GPR_U32(ctx, 31, 0x504260u);
    ctx->pc = 0x50425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504258u;
    // 0x50425c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504258u, 0x504260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504260u;
label_504260:
    // 0x504260: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x504260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504264: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x504264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504268: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x504268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50426c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50426cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504270: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x504270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504274: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x504274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x504278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x504278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50427c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x504280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x504280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504284: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504288: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x504288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50428c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x50428cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504290: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x504290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504294: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x504294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x504298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50429c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x5042a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5042a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5042a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5042a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5042a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5042a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5042ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5042acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5042b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5042b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5042b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5042B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5042B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5042B4u;
        // 0x5042b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5042B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5042BCu;
    // 0x5042bc: 0x0  nop
    ctx->pc = 0x5042bcu;
    // NOP
    // 0x5042c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5042c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5042c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5042c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5042c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5042c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5042cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5042ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5042d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5042d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x5042d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5042d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5042dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5042dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5042e0: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x5042E0u;
    SET_GPR_U32(ctx, 31, 0x5042E8u);
    ctx->pc = 0x5042E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5042E0u;
    // 0x5042e4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x5042E0u, 0x5042E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5042E8u;
label_5042e8:
    // 0x5042e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5042e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5042ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5042f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5042f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5042f8: 0xc140ff0  jal         func_503FC0
    ctx->pc = 0x5042F8u;
    SET_GPR_U32(ctx, 31, 0x504300u);
    ctx->pc = 0x5042FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5042F8u;
    // 0x5042fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503FC0u, 0x5042F8u, 0x504300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504300u;
label_504300:
    // 0x504300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504304: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504308: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50430c: 0xc141030  jal         func_5040C0
    ctx->pc = 0x50430Cu;
    SET_GPR_U32(ctx, 31, 0x504314u);
    ctx->pc = 0x504310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50430Cu;
    // 0x504310: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5040C0u, 0x50430Cu, 0x504314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504314u;
label_504314:
    // 0x504314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50431c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50431cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504328: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50432c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50432cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504338: 0x8141070  j           func_5041C0
    ctx->pc = 0x504338u;
    ctx->pc = 0x50433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504338u;
    // 0x50433c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_5041c0;
    ctx->pc = 0x504340u;
    // 0x504340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50434c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50434cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504354: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504358: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50435c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504360: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504360u;
    SET_GPR_U32(ctx, 31, 0x504368u);
    ctx->pc = 0x504364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504360u;
    // 0x504364: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504360u, 0x504368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504368u;
label_504368:
    // 0x504368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50436c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504374: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504378: 0xc140ff0  jal         func_503FC0
    ctx->pc = 0x504378u;
    SET_GPR_U32(ctx, 31, 0x504380u);
    ctx->pc = 0x50437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504378u;
    // 0x50437c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503FC0u, 0x504378u, 0x504380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504380u;
label_504380:
    // 0x504380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504388: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50438c: 0xc141070  jal         func_5041C0
    ctx->pc = 0x50438Cu;
    SET_GPR_U32(ctx, 31, 0x504394u);
    ctx->pc = 0x504390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50438Cu;
    // 0x504390: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    goto label_5041c0;
    ctx->pc = 0x504394u;
label_504394:
    // 0x504394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50439c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50439cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5043a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5043a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5043a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5043a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x5043a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5043acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5043b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5043b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5043b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5043b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5043b8: 0x8141030  j           func_5040C0
    ctx->pc = 0x5043B8u;
    ctx->pc = 0x5043BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5043B8u;
    // 0x5043bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    sub_005040C0_0x5040c0(rdram, ctx, runtime); return;
    ctx->pc = 0x5043C0u;
    // 0x5043c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5043c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5043c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5043c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5043c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5043c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5043cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5043ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5043d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5043d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x5043d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5043d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5043dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5043dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5043e0: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x5043E0u;
    SET_GPR_U32(ctx, 31, 0x5043E8u);
    ctx->pc = 0x5043E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5043E0u;
    // 0x5043e4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x5043E0u, 0x5043E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5043E8u;
label_5043e8:
    // 0x5043e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5043e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5043ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5043f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5043f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5043f8: 0xc141030  jal         func_5040C0
    ctx->pc = 0x5043F8u;
    SET_GPR_U32(ctx, 31, 0x504400u);
    ctx->pc = 0x5043FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5043F8u;
    // 0x5043fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5040C0u, 0x5043F8u, 0x504400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504400u;
label_504400:
    // 0x504400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504408: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50440c: 0xc140ff0  jal         func_503FC0
    ctx->pc = 0x50440Cu;
    SET_GPR_U32(ctx, 31, 0x504414u);
    ctx->pc = 0x504410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50440Cu;
    // 0x504410: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503FC0u, 0x50440Cu, 0x504414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504414u;
label_504414:
    // 0x504414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50441c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50441cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504428: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50442c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50442cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504438: 0x8141070  j           func_5041C0
    ctx->pc = 0x504438u;
    ctx->pc = 0x50443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504438u;
    // 0x50443c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_5041c0;
    ctx->pc = 0x504440u;
    // 0x504440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504448: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50444c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50444cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504450: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504454: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504458: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50445c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504460: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504460u;
    SET_GPR_U32(ctx, 31, 0x504468u);
    ctx->pc = 0x504464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504460u;
    // 0x504464: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504460u, 0x504468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504468u;
label_504468:
    // 0x504468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50446c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50446cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504474: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504478: 0xc141030  jal         func_5040C0
    ctx->pc = 0x504478u;
    SET_GPR_U32(ctx, 31, 0x504480u);
    ctx->pc = 0x50447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504478u;
    // 0x50447c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5040C0u, 0x504478u, 0x504480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504480u;
label_504480:
    // 0x504480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504488: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50448c: 0xc141070  jal         func_5041C0
    ctx->pc = 0x50448Cu;
    SET_GPR_U32(ctx, 31, 0x504494u);
    ctx->pc = 0x504490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50448Cu;
    // 0x504490: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    goto label_5041c0;
    ctx->pc = 0x504494u;
label_504494:
    // 0x504494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50449c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50449cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5044a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5044a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5044a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5044a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x5044a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5044acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5044b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5044b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5044b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5044b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5044b8: 0x8140ff0  j           func_503FC0
    ctx->pc = 0x5044B8u;
    ctx->pc = 0x5044BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5044B8u;
    // 0x5044bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503FC0u;
    sub_00503FC0_0x503fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x5044C0u;
}
