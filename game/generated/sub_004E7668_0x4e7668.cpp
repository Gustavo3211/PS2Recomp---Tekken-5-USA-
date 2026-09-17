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

// Function: sub_004E7668
// Address: 0x4e7668 - 0x4e84e0
void sub_004E7668_0x4e7668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7668_0x4e7668");
#endif

    switch (ctx->pc) {
        case 0x4e7690u: goto label_4e7690;
        case 0x4e76b0u: goto label_4e76b0;
        case 0x4e76f4u: goto label_4e76f4;
        case 0x4e7730u: goto label_4e7730;
        case 0x4e7750u: goto label_4e7750;
        case 0x4e7778u: goto label_4e7778;
        case 0x4e7888u: goto label_4e7888;
        case 0x4e78c8u: goto label_4e78c8;
        case 0x4e7908u: goto label_4e7908;
        case 0x4e7940u: goto label_4e7940;
        case 0x4e7b40u: goto label_4e7b40;
        case 0x4e7b50u: goto label_4e7b50;
        case 0x4e7b64u: goto label_4e7b64;
        case 0x4e7ba8u: goto label_4e7ba8;
        case 0x4e7bb8u: goto label_4e7bb8;
        case 0x4e7bccu: goto label_4e7bcc;
        case 0x4e7c10u: goto label_4e7c10;
        case 0x4e7c20u: goto label_4e7c20;
        case 0x4e7c34u: goto label_4e7c34;
        case 0x4e7c6cu: goto label_4e7c6c;
        case 0x4e7c7cu: goto label_4e7c7c;
        case 0x4e7c90u: goto label_4e7c90;
        case 0x4e7d04u: goto label_4e7d04;
        case 0x4e7da8u: goto label_4e7da8;
        case 0x4e7df4u: goto label_4e7df4;
        case 0x4e7e60u: goto label_4e7e60;
        case 0x4e8014u: goto label_4e8014;
        case 0x4e8038u: goto label_4e8038;
        case 0x4e8070u: goto label_4e8070;
        case 0x4e80f0u: goto label_4e80f0;
        case 0x4e8194u: goto label_4e8194;
        case 0x4e82ecu: goto label_4e82ec;
        case 0x4e8404u: goto label_4e8404;
        case 0x4e8494u: goto label_4e8494;
        case 0x4e849cu: goto label_4e849c;
        case 0x4e84a4u: goto label_4e84a4;
        default: break;
    }

    ctx->pc = 0x4e7668u;

    // 0x4e7668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e7668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e766c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e766cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e7670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e767c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e767cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7680: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e7680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e7684: 0x813a050  j           func_4E8140
    ctx->pc = 0x4E7684u;
    ctx->pc = 0x4E7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7684u;
    // 0x4e7688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8140u;
    goto label_4e8140;
    ctx->pc = 0x4E768Cu;
    // 0x4e768c: 0x0  nop
    ctx->pc = 0x4e768cu;
    // NOP
label_4e7690:
    // 0x4e7690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e7698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e769c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e769cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e76a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e76a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e76a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E76A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76A4u;
        // 0x4e76a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E76A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E76ACu;
    // 0x4e76ac: 0x0  nop
    ctx->pc = 0x4e76acu;
    // NOP
label_4e76b0:
    // 0x4e76b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e76b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e76b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e76b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e76bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e76bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e76c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e76c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e76c4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e76c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e76c8: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4e76c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e76cc: 0x24c611d0  addiu       $a2, $a2, 0x11D0
    ctx->pc = 0x4e76ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4560));
    // 0x4e76d0: 0x86050160  lh          $a1, 0x160($s0)
    ctx->pc = 0x4e76d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e76d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e76d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e76dc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4e76dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4e76e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e76e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e76e8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e76ec: 0xc135d9c  jal         func_4D7670
    ctx->pc = 0x4E76ECu;
    SET_GPR_U32(ctx, 31, 0x4E76F4u);
    ctx->pc = 0x4E76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E76ECu;
    // 0x4e76f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7670u, 0x4E76ECu, 0x4E76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E76F4u;
label_4e76f4:
    // 0x4e76f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e76f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e76f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E76F8u;
    {
        const bool branch_taken_0x4e76f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76F8u;
        // 0x4e76fc: 0x260301bc  addiu       $v1, $s0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e76f8) {
            ctx->pc = 0x4E7710u;
            goto label_4e7710;
        }
    }
    ctx->pc = 0x4E7700u;
    // 0x4e7700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e7704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7708: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E7708u;
    ctx->pc = 0x4E770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7708u;
    // 0x4e770c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E7710u;
label_4e7710:
    // 0x4e7710: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e7710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e7714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e7718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e771c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e771cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7720: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e7724: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e7724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7728: 0x8139dcc  j           func_4E7730
    ctx->pc = 0x4E7728u;
    ctx->pc = 0x4E772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7728u;
    // 0x4e772c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7730u;
    goto label_4e7730;
    ctx->pc = 0x4E7730u;
label_4e7730:
    // 0x4e7730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e7730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e7734: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e7734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e7738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e773c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e773cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7740: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x4e7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x4e7744: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e7748: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E7748u;
    SET_GPR_U32(ctx, 31, 0x4E7750u);
    ctx->pc = 0x4E774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7748u;
    // 0x4e774c: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E7748u, 0x4E7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7750u;
label_4e7750:
    // 0x4e7750: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4e7750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e7754: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4e7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e7758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e775c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e775cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7760: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e7760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e7764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e7764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7768: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e776c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e776cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7770: 0x8139dde  j           func_4E7778
    ctx->pc = 0x4E7770u;
    ctx->pc = 0x4E7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7770u;
    // 0x4e7774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7778u;
    goto label_4e7778;
    ctx->pc = 0x4E7778u;
label_4e7778:
    // 0x4e7778: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4e7778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e777c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e7780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e7780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e7784: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e7784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e7788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e778c: 0x24c611d0  addiu       $a2, $a2, 0x11D0
    ctx->pc = 0x4e778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4560));
    // 0x4e7790: 0xa52201c2  sh          $v0, 0x1C2($t1)
    ctx->pc = 0x4e7790u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7794: 0x25270166  addiu       $a3, $t1, 0x166
    ctx->pc = 0x4e7794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 358));
    // 0x4e7798: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4e7798u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4e779c: 0x252a01bc  addiu       $t2, $t1, 0x1BC
    ctx->pc = 0x4e779cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 444));
    // 0x4e77a0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e77a4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e77a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e77a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e77a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e77ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e77b0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e77b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e77b4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e77b8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e77b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e77bc: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x4e77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
    // 0x4e77c0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4e77c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e77c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e77c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e77c8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e77cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4e77ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4e77d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e77d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e77d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e77d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e77d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e77dc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e77e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e77e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e77e4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e77e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e77e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e77ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e77ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e77f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e77f4: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4e77f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4e77f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e77fc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e77fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e7800: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e7800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e7804: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e7804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e7808: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e7808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e780c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4e780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4e7810: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e7810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e7814: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e7814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e7818: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e7818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e781c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e781cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e7820: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e7820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e7824: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e7824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e7828: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e7828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e782c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e7830: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4e7830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4e7834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e7834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e7838: 0x84637f00  lh          $v1, 0x7F00($v1)
    ctx->pc = 0x4e7838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32512)));
    // 0x4e783c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4e783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4e7840: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e7840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e7844: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e7844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e7848: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4e7848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e784c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E784Cu;
    {
        const bool branch_taken_0x4e784c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E784Cu;
        // 0x4e7850: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e784c) {
            ctx->pc = 0x4E7868u;
            goto label_4e7868;
        }
    }
    ctx->pc = 0x4E7854u;
    // 0x4e7854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7858: 0xa526000c  sh          $a2, 0xC($t1)
    ctx->pc = 0x4e7858u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e785c: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E785Cu;
    ctx->pc = 0x4E7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E785Cu;
    // 0x4e7860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E7864u;
    // 0x4e7864: 0x0  nop
    ctx->pc = 0x4e7864u;
    // NOP
label_4e7868:
    // 0x4e7868: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4e7868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e786c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7870: 0xa523014a  sh          $v1, 0x14A($t1)
    ctx->pc = 0x4e7870u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e7874: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4e7874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e7878: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e787c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4e787cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7880: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E7880u;
    ctx->pc = 0x4E7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7880u;
    // 0x4e7884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E7888u;
label_4e7888:
    // 0x4e7888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e7888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e788c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e788cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e7894: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4e7894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4e7898: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4e7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4e789c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e789cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e78a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4e78a4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4e78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e78a8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E78A8u;
    {
        const bool branch_taken_0x4e78a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E78A8u;
        // 0x4e78ac: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e78a8) {
            ctx->pc = 0x4E78BCu;
            goto label_4e78bc;
        }
    }
    ctx->pc = 0x4E78B0u;
    // 0x4e78b0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e78b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e78b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e78b8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e78b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e78bc:
    // 0x4e78bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e78bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e78c0: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E78C0u;
    ctx->pc = 0x4E78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E78C0u;
    // 0x4e78c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E78C8u;
label_4e78c8:
    // 0x4e78c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4e78c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e78cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e78ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e78d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e78d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4e78d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e78d8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x4e78d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4e78dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e78e0: 0xa462015e  sh          $v0, 0x15E($v1)
    ctx->pc = 0x4e78e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e78e4: 0x246501bc  addiu       $a1, $v1, 0x1BC
    ctx->pc = 0x4e78e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4e78e8: 0xa4660162  sh          $a2, 0x162($v1)
    ctx->pc = 0x4e78e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 354), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e78ec: 0xa4670164  sh          $a3, 0x164($v1)
    ctx->pc = 0x4e78ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 356), (uint16_t)GPR_U32(ctx, 7));
    // 0x4e78f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e78f4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e78f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e78f8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e78fc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e78fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7900: 0x8139e42  j           func_4E7908
    ctx->pc = 0x4E7900u;
    ctx->pc = 0x4E7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7900u;
    // 0x4e7904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7908u;
    goto label_4e7908;
    ctx->pc = 0x4E7908u;
label_4e7908:
    // 0x4e7908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e7908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e790c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e7910: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e7910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e7914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e7918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e791c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e7920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e7924: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e7924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e7928: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e7928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e792c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e7930: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4e7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4e7934: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4e7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4e7938: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E7938u;
    SET_GPR_U32(ctx, 31, 0x4E7940u);
    ctx->pc = 0x4E793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7938u;
    // 0x4e793c: 0x3c12ffff  lui         $s2, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E7938u, 0x4E7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7940u;
label_4e7940:
    // 0x4e7940: 0x2663015e  addiu       $v1, $s3, 0x15E
    ctx->pc = 0x4e7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4e7944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4e7944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7948: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e7948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e794c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e794cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e7950: 0x249111d0  addiu       $s1, $a0, 0x11D0
    ctx->pc = 0x4e7950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
    // 0x4e7954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e7954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e7958: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e7958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e795c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e795cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e7960: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e7964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7968: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e796c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7970: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7974: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e797c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e797cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7980: 0x96640164  lhu         $a0, 0x164($s3)
    ctx->pc = 0x4e7980u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4e7984: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e7984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e7988: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e7988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e798c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e798cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7990: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7994: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4e7994u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7998: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4e7998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4e799c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e799cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e79a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E79A0u;
    {
        const bool branch_taken_0x4e79a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E79A0u;
        // 0x4e79a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e79a0) {
            ctx->pc = 0x4E79D8u;
            goto label_4e79d8;
        }
    }
    ctx->pc = 0x4E79A8u;
    // 0x4e79a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e79a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e79ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e79acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e79b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e79b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e79b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e79b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e79b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e79b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e79bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e79bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e79c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e79c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e79c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e79c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e79c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e79c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e79cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e79ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e79d0: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E79D0u;
    ctx->pc = 0x4E79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E79D0u;
    // 0x4e79d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E79D8u;
label_4e79d8:
    // 0x4e79d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e79dc: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4e79dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4e79e0: 0x27d611dc  addiu       $s6, $fp, 0x11DC
    ctx->pc = 0x4e79e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4572));
    // 0x4e79e4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e79e8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4e79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11DCu));
    // 0x4e79ec: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e79f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e79f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e79f4: 0x249511e0  addiu       $s5, $a0, 0x11E0
    ctx->pc = 0x4e79f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    // 0x4e79f8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e79f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e79fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e79fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7a04: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4e7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e7a08: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e7a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7a10: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4e7a10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4e7a14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e7a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e7a18: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e7a1c: 0x26f411e4  addiu       $s4, $s7, 0x11E4
    ctx->pc = 0x4e7a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4580));
    // 0x4e7a20: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11E4u));
    // 0x4e7a24: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e7a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e7a28: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e7a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e7a2c: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4e7a2cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e7a30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7a34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e7a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e7a38: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7a3c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e7a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e7a40: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4e7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4e7a44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e7a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e7a48: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4e7a4c: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4e7a4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e7a50: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e7a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e7a54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7a58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7a5c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e7a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e7a60: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e7a64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e7a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e7a68: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4e7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4e7a6c: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4e7a6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7a70: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e7a74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7a78: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4e7a78u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e7a7c: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4e7a7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4e7a80: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4e7a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4e7a84: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e7a88: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4e7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4e7a8c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e7a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e7a90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7a94: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4e7a94u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e7a98: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4e7a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4e7a9c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4e7a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4e7aa0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4e7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4e7aa4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4e7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4e7aa8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e7aac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7ab0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4e7ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e7ab4: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4e7ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4e7ab8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4e7ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e7abc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e7ac0: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4e7ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4e7ac4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7ac8: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e7ac8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e7acc: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4e7accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4e7ad0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e7ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e7ad4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e7ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7ad8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4e7ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4e7adc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7ae0: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4e7ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e7ae4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7ae8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4e7ae8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7aec: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x4e7aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e7af0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4E7AF0u;
    {
        const bool branch_taken_0x4e7af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7af0) {
            ctx->pc = 0x4E7AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AF0u;
            // 0x4e7af4: 0x8662011c  lh          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7BD8u;
            goto label_4e7bd8;
        }
    }
    ctx->pc = 0x4E7AF8u;
    // 0x4e7af8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x4e7af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4e7afc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4E7AFCu;
    {
        const bool branch_taken_0x4e7afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7afc) {
            ctx->pc = 0x4E7B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AFCu;
            // 0x4e7b00: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7B70u;
            goto label_4e7b70;
        }
    }
    ctx->pc = 0x4E7B04u;
    // 0x4e7b04: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x4e7b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4e7b08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7b0c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e7b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e7b10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7b14: 0x261011d4  addiu       $s0, $s0, 0x11D4
    ctx->pc = 0x4e7b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4564));
    // 0x4e7b18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7b1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7b20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7b24: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e7b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7b28: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e7b2c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7b30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7b34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7b38: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E7B38u;
    SET_GPR_U32(ctx, 31, 0x4E7B40u);
    ctx->pc = 0x4E7B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B38u;
    // 0x4e7b3c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E7B38u, 0x4E7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B40u;
label_4e7b40:
    // 0x4e7b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e7b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e7b48: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E7B48u;
    SET_GPR_U32(ctx, 31, 0x4E7B50u);
    ctx->pc = 0x4E7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B48u;
    // 0x4e7b4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E7B48u, 0x4E7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B50u;
label_4e7b50:
    // 0x4e7b50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e7b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7b54: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7b58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e7b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7b5c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4E7B5Cu;
    SET_GPR_U32(ctx, 31, 0x4E7B64u);
    ctx->pc = 0x4E7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B5Cu;
    // 0x4e7b60: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4E7B5Cu, 0x4E7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B64u;
label_4e7b64:
    // 0x4e7b64: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4E7B64u;
    {
        const bool branch_taken_0x4e7b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B64u;
        // 0x4e7b68: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b64) {
            ctx->pc = 0x4E7C94u;
            goto label_4e7c94;
        }
    }
    ctx->pc = 0x4E7B6Cu;
    // 0x4e7b6c: 0x0  nop
    ctx->pc = 0x4e7b6cu;
    // NOP
label_4e7b70:
    // 0x4e7b70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7b74: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e7b74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e7b78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7b7c: 0x261011d4  addiu       $s0, $s0, 0x11D4
    ctx->pc = 0x4e7b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4564));
    // 0x4e7b80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7b84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7b88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7b8c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e7b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7b90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e7b94: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7b98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7b9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7ba0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E7BA0u;
    SET_GPR_U32(ctx, 31, 0x4E7BA8u);
    ctx->pc = 0x4E7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7BA0u;
    // 0x4e7ba4: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E7BA0u, 0x4E7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7BA8u;
label_4e7ba8:
    // 0x4e7ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e7ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7bac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e7bb0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E7BB0u;
    SET_GPR_U32(ctx, 31, 0x4E7BB8u);
    ctx->pc = 0x4E7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7BB0u;
    // 0x4e7bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E7BB0u, 0x4E7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7BB8u;
label_4e7bb8:
    // 0x4e7bb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e7bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7bbc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7bc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e7bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7bc4: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4E7BC4u;
    SET_GPR_U32(ctx, 31, 0x4E7BCCu);
    ctx->pc = 0x4E7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7BC4u;
    // 0x4e7bc8: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4E7BC4u, 0x4E7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7BCCu;
label_4e7bcc:
    // 0x4e7bcc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4E7BCCu;
    {
        const bool branch_taken_0x4e7bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7BCCu;
        // 0x4e7bd0: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7bcc) {
            ctx->pc = 0x4E7C94u;
            goto label_4e7c94;
        }
    }
    ctx->pc = 0x4E7BD4u;
    // 0x4e7bd4: 0x0  nop
    ctx->pc = 0x4e7bd4u;
    // NOP
label_4e7bd8:
    // 0x4e7bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7bdc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e7bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e7be0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7be4: 0x261011d4  addiu       $s0, $s0, 0x11D4
    ctx->pc = 0x4e7be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4564));
    // 0x4e7be8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7bec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7bf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7bf4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e7bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7bf8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e7bfc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7c00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7c04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7c08: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E7C08u;
    SET_GPR_U32(ctx, 31, 0x4E7C10u);
    ctx->pc = 0x4E7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C08u;
    // 0x4e7c0c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E7C08u, 0x4E7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C10u;
label_4e7c10:
    // 0x4e7c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e7c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e7c18: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E7C18u;
    SET_GPR_U32(ctx, 31, 0x4E7C20u);
    ctx->pc = 0x4E7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C18u;
    // 0x4e7c1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E7C18u, 0x4E7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C20u;
label_4e7c20:
    // 0x4e7c20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e7c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c24: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e7c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7c28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e7c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c2c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4E7C2Cu;
    SET_GPR_U32(ctx, 31, 0x4E7C34u);
    ctx->pc = 0x4E7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C2Cu;
    // 0x4e7c30: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4E7C2Cu, 0x4E7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C34u;
label_4e7c34:
    // 0x4e7c34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7c38: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4e7c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4e7c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7c40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7c44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7c48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7c4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7c50: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e7c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7c54: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e7c58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e7c5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e7c60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e7c64: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E7C64u;
    SET_GPR_U32(ctx, 31, 0x4E7C6Cu);
    ctx->pc = 0x4E7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C64u;
    // 0x4e7c68: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E7C64u, 0x4E7C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C6Cu;
label_4e7c6c:
    // 0x4e7c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e7c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e7c74: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E7C74u;
    SET_GPR_U32(ctx, 31, 0x4E7C7Cu);
    ctx->pc = 0x4E7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C74u;
    // 0x4e7c78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E7C74u, 0x4E7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C7Cu;
label_4e7c7c:
    // 0x4e7c7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e7c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c80: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e7c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7c84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e7c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c88: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4E7C88u;
    SET_GPR_U32(ctx, 31, 0x4E7C90u);
    ctx->pc = 0x4E7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7C88u;
    // 0x4e7c8c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4E7C88u, 0x4E7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C90u;
label_4e7c90:
    // 0x4e7c90: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4e7c90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4e7c94:
    // 0x4e7c94: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e7c98: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4e7c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4e7c9c: 0x944511e0  lhu         $a1, 0x11E0($v0)
    ctx->pc = 0x4e7c9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F11E0u));
    // 0x4e7ca0: 0x97c711dc  lhu         $a3, 0x11DC($fp)
    ctx->pc = 0x4e7ca0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4572)));
    // 0x4e7ca4: 0x26282494  addiu       $t0, $s1, 0x2494
    ctx->pc = 0x4e7ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4e7ca8: 0x96e611e4  lhu         $a2, 0x11E4($s7)
    ctx->pc = 0x4e7ca8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4580)));
    // 0x4e7cac: 0x26292498  addiu       $t1, $s1, 0x2498
    ctx->pc = 0x4e7cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4e7cb0: 0x262a249c  addiu       $t2, $s1, 0x249C
    ctx->pc = 0x4e7cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4e7cb4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7cb8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e7cbc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e7cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4e7cc0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4e7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e7cc4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4e7cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4e7cc8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4e7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e7ccc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4e7cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4e7cd0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e7cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e7cd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e7cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e7cd8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e7cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e7cdc: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e7cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4e7ce0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7ce4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e7ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e7ce8: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4e7ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4e7cec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4e7cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4e7cf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4e7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4e7cf4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4e7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4e7cf8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4e7cfc: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4E7CFCu;
    SET_GPR_U32(ctx, 31, 0x4E7D04u);
    ctx->pc = 0x4E7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7CFCu;
    // 0x4e7d00: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4E7CFCu, 0x4E7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7D04u;
label_4e7d04:
    // 0x4e7d04: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e7d08: 0x244411d0  addiu       $a0, $v0, 0x11D0
    ctx->pc = 0x4e7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4560));
    // 0x4e7d0c: 0x862324a0  lh          $v1, 0x24A0($s1)
    ctx->pc = 0x4e7d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4e7d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e7d14: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e7d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e7d1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e7d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e7d20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4e7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4e7d24: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4e7d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e7d28: 0x463000f  bgezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4E7D28u;
    {
        const bool branch_taken_0x4e7d28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4e7d28) {
            ctx->pc = 0x4E7D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7D28u;
            // 0x4e7d2c: 0x266301bc  addiu       $v1, $s3, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7D68u;
            goto label_4e7d68;
        }
    }
    ctx->pc = 0x4E7D30u;
    // 0x4e7d30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e7d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7d34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e7d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e7d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7d40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7d44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e7d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7d48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e7d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e7d4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e7d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e7d50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e7d50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e7d54: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e7d54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e7d58: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e7d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e7d5c: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E7D5Cu;
    ctx->pc = 0x4E7D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7D5Cu;
    // 0x4e7d60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E7D64u;
    // 0x4e7d64: 0x0  nop
    ctx->pc = 0x4e7d64u;
    // NOP
label_4e7d68:
    // 0x4e7d68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7d6c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e7d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e7d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7d74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7d78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e7d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7d80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e7d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e7d84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e7d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7d88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e7d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e7d8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e7d8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e7d90: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e7d90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e7d94: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e7d94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e7d98: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e7d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e7d9c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e7d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7da0: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E7DA0u;
    ctx->pc = 0x4E7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7DA0u;
    // 0x4e7da4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E7DA8u;
label_4e7da8:
    // 0x4e7da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e7dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e7db0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e7db0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e7db4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e7db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e7db8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4e7db8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4e7dbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e7dc0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e7dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4e7dc4: 0x265211dc  addiu       $s2, $s2, 0x11DC
    ctx->pc = 0x4e7dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4572));
    // 0x4e7dc8: 0x267311e0  addiu       $s3, $s3, 0x11E0
    ctx->pc = 0x4e7dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4576));
    // 0x4e7dcc: 0x269411e4  addiu       $s4, $s4, 0x11E4
    ctx->pc = 0x4e7dccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4580));
    // 0x4e7dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e7dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e7dd8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4e7dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4e7ddc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e7de0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e7de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7de4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e7de8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e7de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e7dec: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E7DECu;
    SET_GPR_U32(ctx, 31, 0x4E7DF4u);
    ctx->pc = 0x4E7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7DECu;
    // 0x4e7df0: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E7DECu, 0x4E7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7DF4u;
label_4e7df4:
    // 0x4e7df4: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4e7df4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7df8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4e7df8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7dfc: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x4e7dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7e00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4e7e04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7e08: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x4e7e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x4e7e0c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4e7e0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4e7e10: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4e7e10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4e7e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7e18: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4e7e18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4e7e1c: 0x1906024  and         $t4, $t4, $s0
    ctx->pc = 0x4e7e1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 16));
    // 0x4e7e20: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4e7e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4e7e24: 0xae4c0000  sw          $t4, 0x0($s2)
    ctx->pc = 0x4e7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 12));
    // 0x4e7e28: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e7e2c: 0xae6b0000  sw          $t3, 0x0($s3)
    ctx->pc = 0x4e7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    // 0x4e7e30: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e7e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e7e34: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e7e38: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e7e3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7e40: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4e7e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7e44: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4e7e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7e48: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4e7e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7e4c: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x4e7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x4e7e50: 0x24c611d4  addiu       $a2, $a2, 0x11D4
    ctx->pc = 0x4e7e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4564));
    // 0x4e7e54: 0x24e711d8  addiu       $a3, $a3, 0x11D8
    ctx->pc = 0x4e7e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4568));
    // 0x4e7e58: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4E7E58u;
    SET_GPR_U32(ctx, 31, 0x4E7E60u);
    ctx->pc = 0x4E7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7E58u;
    // 0x4e7e5c: 0x2631d680  addiu       $s1, $s1, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4E7E58u, 0x4E7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7E60u;
label_4e7e60:
    // 0x4e7e60: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4e7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4e7e64: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e7e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7e68: 0x262e2494  addiu       $t6, $s1, 0x2494
    ctx->pc = 0x4e7e68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4e7e6c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7e70: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4e7e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7e74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7e78: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4e7e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7e7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e7e80: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e7e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e7e84: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7e88: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e7e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7e8c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e7e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4e7e90: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4e7e90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7e94: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4e7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4e7e98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e7e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e7e9c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e7e9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e7ea0: 0x262d2498  addiu       $t5, $s1, 0x2498
    ctx->pc = 0x4e7ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4e7ea4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4e7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4e7ea8: 0x262c249c  addiu       $t4, $s1, 0x249C
    ctx->pc = 0x4e7ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4e7eac: 0x964b0000  lhu         $t3, 0x0($s2)
    ctx->pc = 0x4e7eacu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7eb0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7eb4: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4e7eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e7eb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7ebc: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4e7ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e7ec0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e7ec4: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4e7ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7ec8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e7ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4e7ecc: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x4e7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4e7ed0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4e7ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4e7ed4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e7ed4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e7ed8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e7edc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e7edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e7ee0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4e7ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4e7ee4: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4e7ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4e7ee8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4e7eec: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4e7eecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4e7ef0: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4e7ef0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7ef4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7ef8: 0xa62b2334  sh          $t3, 0x2334($s1)
    ctx->pc = 0x4e7ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9012), (uint16_t)GPR_U32(ctx, 11));
    // 0x4e7efc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7f00: 0xa6242336  sh          $a0, 0x2336($s1)
    ctx->pc = 0x4e7f00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9014), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e7f04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4e7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e7f08: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4e7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4e7f0c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4e7f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4e7f10: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4e7f10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4e7f14: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4e7f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4e7f18: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4e7f1c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e7f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e7f20: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4e7f20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7f24: 0xa6252338  sh          $a1, 0x2338($s1)
    ctx->pc = 0x4e7f24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9016), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e7f28: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4e7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e7f2c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4e7f2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4e7f30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4e7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e7f34: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7f38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7f3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e7f40: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7f44: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e7f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4e7f48: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4e7f4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e7f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e7f50: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x4e7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x4e7f54: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e7f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7f58: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7f5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7f60: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4e7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4e7f64: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4e7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e7f68: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7f6c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e7f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4e7f70: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e7f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4e7f74: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4e7f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4e7f78: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e7f7c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e7f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e7f80: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x4e7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x4e7f84: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e7f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7f88: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e7f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e7f8c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4e7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4e7f90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e7f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e7f94: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4e7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4e7f98: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4e7f98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e7f9c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e7fa0: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4e7fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4e7fa4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4e7fa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4e7fa8: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4e7fa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4e7fac: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e7facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e7fb0: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e7fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4e7fb4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e7fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e7fb8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e7fb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e7fbc: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4e7fbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e7fc0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e7fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7fc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e7fc8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4e7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4e7fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e7fd0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e7fd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e7fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e7fd8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e7fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e7fdc: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e7fdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e7fe0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e7fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e7fe4: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4e7fe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4e7fe8: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4e7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4e7fec: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4e7ff0: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4e7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4e7ff4: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e7ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e7ff8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4e7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e7ffc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e8000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e8004: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e8004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e8008: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e800c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4E800Cu;
    SET_GPR_U32(ctx, 31, 0x4E8014u);
    ctx->pc = 0x4E8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E800Cu;
    // 0x4e8010: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4E800Cu, 0x4E8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8014u;
label_4e8014:
    // 0x4e8014: 0x962324a0  lhu         $v1, 0x24A0($s1)
    ctx->pc = 0x4e8014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4e8018: 0x962224a2  lhu         $v0, 0x24A2($s1)
    ctx->pc = 0x4e8018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9378)));
    // 0x4e801c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8020: 0xa623233a  sh          $v1, 0x233A($s1)
    ctx->pc = 0x4e8020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8024: 0xa622233c  sh          $v0, 0x233C($s1)
    ctx->pc = 0x4e8024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8028: 0xa620233e  sh          $zero, 0x233E($s1)
    ctx->pc = 0x4e8028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e802c: 0x96a20162  lhu         $v0, 0x162($s5)
    ctx->pc = 0x4e802cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
    // 0x4e8030: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4E8030u;
    SET_GPR_U32(ctx, 31, 0x4E8038u);
    ctx->pc = 0x4E8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8030u;
    // 0x4e8034: 0xa6222330  sh          $v0, 0x2330($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 9008), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4E8030u, 0x4E8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8038u;
label_4e8038:
    // 0x4e8038: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4e8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e803c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8040: 0xa6a201bc  sh          $v0, 0x1BC($s5)
    ctx->pc = 0x4e8040u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e8044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e8048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e804c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e804cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e8050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e8054: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e8054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e8058: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e8058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e805c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e805cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e8060: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e8060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e8064: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E8064u;
    ctx->pc = 0x4E8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8064u;
    // 0x4e8068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E806Cu;
    // 0x4e806c: 0x0  nop
    ctx->pc = 0x4e806cu;
    // NOP
label_4e8070:
    // 0x4e8070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e8070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e8074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e807c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e807cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e8080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e8084: 0x261201c2  addiu       $s2, $s0, 0x1C2
    ctx->pc = 0x4e8084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 450));
    // 0x4e8088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e8088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e808c: 0x2611015e  addiu       $s1, $s0, 0x15E
    ctx->pc = 0x4e808cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4e8090: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4e8090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4e8094: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e8094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e8098: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e8098u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e809c: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x4e809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x4e80a0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e80a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e80a4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e80a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e80a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e80ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e80acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e80b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e80b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e80b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e80b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e80b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e80bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e80bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e80c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e80c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e80c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4e80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4e80c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e80c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e80cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e80ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e80d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e80d4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e80d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e80d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E80D8u;
    {
        const bool branch_taken_0x4e80d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e80d8) {
            ctx->pc = 0x4E80DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E80D8u;
            // 0x4e80dc: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E80F4u;
            goto label_4e80f4;
        }
    }
    ctx->pc = 0x4E80E0u;
    // 0x4e80e0: 0x96030164  lhu         $v1, 0x164($s0)
    ctx->pc = 0x4e80e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4e80e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4e80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4e80e8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E80E8u;
    SET_GPR_U32(ctx, 31, 0x4E80F0u);
    ctx->pc = 0x4E80ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E80E8u;
    // 0x4e80ec: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E80E8u, 0x4E80F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E80F0u;
label_4e80f0:
    // 0x4e80f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e80f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e80f4:
    // 0x4e80f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e80f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4e80f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4e80fc: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4e80fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4e8100: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8100u;
    {
        const bool branch_taken_0x4e8100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8100u;
        // 0x4e8104: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8100) {
            ctx->pc = 0x4E8124u;
            goto label_4e8124;
        }
    }
    ctx->pc = 0x4E8108u;
    // 0x4e8108: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x4e8108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4e810c: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x4e810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e8110: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4e8110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8114: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e8114u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8118: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4e8118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e811c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4e811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4e8120: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4e8120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e8124:
    // 0x4e8124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e8128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e812c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e812cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e8130: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e8130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e8134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e8138: 0x813a058  j           func_4E8160
    ctx->pc = 0x4E8138u;
    ctx->pc = 0x4E813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8138u;
    // 0x4e813c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8160u;
    goto label_4e8160;
    ctx->pc = 0x4E8140u;
label_4e8140:
    // 0x4e8140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e8144: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4e8144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e8148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e814c: 0xa48201bc  sh          $v0, 0x1BC($a0)
    ctx->pc = 0x4e814cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8154: 0x8139dcc  j           func_4E7730
    ctx->pc = 0x4E8154u;
    ctx->pc = 0x4E8158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8154u;
    // 0x4e8158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7730u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4e7730;
    ctx->pc = 0x4E815Cu;
    // 0x4e815c: 0x0  nop
    ctx->pc = 0x4e815cu;
    // NOP
label_4e8160:
    // 0x4e8160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4e8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4e8164: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4e8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4e8168: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4e8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4e816c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4e816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4e8170: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4e8170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4e8174: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4e8174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4e8178: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4e8178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4e817c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4e817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4e8180: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4e8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4e8184: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4e8184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4e8188: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4e8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4e818c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E818Cu;
    SET_GPR_U32(ctx, 31, 0x4E8194u);
    ctx->pc = 0x4E8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E818Cu;
    // 0x4e8190: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E818Cu, 0x4E8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8194u;
label_4e8194:
    // 0x4e8194: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x4E8194u;
    {
        const bool branch_taken_0x4e8194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8194u;
        // 0x4e8198: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8194) {
            ctx->pc = 0x4E84ACu;
            goto label_4e84ac;
        }
    }
    ctx->pc = 0x4E819Cu;
    // 0x4e819c: 0x26d40010  addiu       $s4, $s6, 0x10
    ctx->pc = 0x4e819cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4e81a0: 0x247e11dc  addiu       $fp, $v1, 0x11DC
    ctx->pc = 0x4e81a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4572));
    // 0x4e81a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e81a8: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4e81a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4e81ac: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4e81acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4e81b0: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x4e81b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4e81b4: 0x26d50014  addiu       $s5, $s6, 0x14
    ctx->pc = 0x4e81b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4e81b8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e81b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e81bc: 0x246d11e0  addiu       $t5, $v1, 0x11E0
    ctx->pc = 0x4e81bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4576));
    // 0x4e81c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e81c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e81c4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e81c8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e81c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e81cc: 0x246e11e4  addiu       $t6, $v1, 0x11E4
    ctx->pc = 0x4e81ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4580));
    // 0x4e81d0: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4e81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x4e81d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e81d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e81d8: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x4e81d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4e81dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e81dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e81e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e81e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e81e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e81e8: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4e81e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e81ec: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e81ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e81f0: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4e81f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e81f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e81f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e81f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e81f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e81fc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e81fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e8200: 0x87d20000  lh          $s2, 0x0($fp)
    ctx->pc = 0x4e8200u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4e8204: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e8204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e8208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e820c: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4e820cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4e8210: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e8210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e8214: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e8218: 0x85b10000  lh          $s1, 0x0($t5)
    ctx->pc = 0x4e8218u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e821c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e8220: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e8220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e8224: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e8224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e8228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e822c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4e822cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4e8230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8234: 0x86c20136  lh          $v0, 0x136($s6)
    ctx->pc = 0x4e8234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
    // 0x4e8238: 0x85d00000  lh          $s0, 0x0($t6)
    ctx->pc = 0x4e8238u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e823c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4e823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e8240: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x4e8240u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4e8244: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e8244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e8248: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4e8248u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4e824c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e824cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e8250: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4e8250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x4e8254: 0x86c20138  lh          $v0, 0x138($s6)
    ctx->pc = 0x4e8254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 312)));
    // 0x4e8258: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x4e8258u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4e825c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4e825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4e8260: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x4e8260u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4e8264: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e8264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e8268: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4e8268u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4e826c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e826cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e8270: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e8270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e8274: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4e8274u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4e8278: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4e8278u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4e827c: 0x86c2013a  lh          $v0, 0x13A($s6)
    ctx->pc = 0x4e827cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 314)));
    // 0x4e8280: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4e8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4e8284: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4e8284u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4e8288: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e8288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e828c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4e828cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4e8290: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8294: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4e8294u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4e8298: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e829c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e82a0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4e82a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4e82a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4e82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4e82a8: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4e82a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e82ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e82b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e82b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e82b8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e82b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e82bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e82bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e82c0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4e82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4e82c4: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4e82c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e82c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e82cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e82d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e82d4: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e82d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e82d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e82d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e82dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e82dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e82e0: 0x7fad0000  sq          $t5, 0x0($sp)
    ctx->pc = 0x4e82e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 13));
    // 0x4e82e4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E82E4u;
    SET_GPR_U32(ctx, 31, 0x4E82ECu);
    ctx->pc = 0x4E82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E82E4u;
    // 0x4e82e8: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E82E4u, 0x4E82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E82ECu;
label_4e82ec:
    // 0x4e82ec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e82f0: 0x26c50148  addiu       $a1, $s6, 0x148
    ctx->pc = 0x4e82f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 328));
    // 0x4e82f4: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e82f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e82f8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4e82f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4e82fc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e8300: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e8300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e8304: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e8304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e8308: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e8308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e830c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4e830cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4e8310: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e8310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e8314: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e8314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e8318: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4e8318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4e831c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e831cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4e8320: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e8320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8324: 0x7bad0000  lq          $t5, 0x0($sp)
    ctx->pc = 0x4e8324u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8328: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x4E8328u;
    {
        const bool branch_taken_0x4e8328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8328u;
        // 0x4e832c: 0x7bae0010  lq          $t6, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8328) {
            ctx->pc = 0x4E84ACu;
            goto label_4e84ac;
        }
    }
    ctx->pc = 0x4E8330u;
    // 0x4e8330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8334: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e8334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e8338: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e8338u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e833c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e8340: 0x248411d0  addiu       $a0, $a0, 0x11D0
    ctx->pc = 0x4e8340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
    // 0x4e8344: 0x3c0b0054  lui         $t3, 0x54
    ctx->pc = 0x4e8344u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)84 << 16));
    // 0x4e8348: 0x84437f00  lh          $v1, 0x7F00($v0)
    ctx->pc = 0x4e8348u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x547F00u));
    // 0x4e834c: 0x256b7f50  addiu       $t3, $t3, 0x7F50
    ctx->pc = 0x4e834cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32592));
    // 0x4e8350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e8350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e8354: 0x26d00160  addiu       $s0, $s6, 0x160
    ctx->pc = 0x4e8354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
    // 0x4e8358: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e8358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e835c: 0x26d10162  addiu       $s1, $s6, 0x162
    ctx->pc = 0x4e835cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 354));
    // 0x4e8360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e8360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e8364: 0x26cc0166  addiu       $t4, $s6, 0x166
    ctx->pc = 0x4e8364u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 358));
    // 0x4e8368: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e8368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e836c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e836cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e8370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4e8370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4e8374: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e8374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e8378: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x4e8378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e837c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x4e837cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8380: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e8380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e8384: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e8384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8388: 0xa6c0015e  sh          $zero, 0x15E($s6)
    ctx->pc = 0x4e8388u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e838c: 0x24c611d4  addiu       $a2, $a2, 0x11D4
    ctx->pc = 0x4e838cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4564));
    // 0x4e8390: 0xa6c2000c  sh          $v0, 0xC($s6)
    ctx->pc = 0x4e8390u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8394: 0x24e711d8  addiu       $a3, $a3, 0x11D8
    ctx->pc = 0x4e8394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4568));
    // 0x4e8398: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4e8398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e839c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e83a0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4e83a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e83a4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4e83a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e83a8: 0x95630002  lhu         $v1, 0x2($t3)
    ctx->pc = 0x4e83a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x4e83ac: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4e83acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e83b0: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x4e83b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4e83b4: 0xa6c20164  sh          $v0, 0x164($s6)
    ctx->pc = 0x4e83b4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e83b8: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x4e83b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x4e83bc: 0xa5830000  sh          $v1, 0x0($t4)
    ctx->pc = 0x4e83bcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e83c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4e83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4e83c4: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x4e83c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e83c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e83c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e83cc: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4e83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e83d0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e83d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e83d4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4e83d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4e83d8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4e83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4e83dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e83e0: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4e83e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4e83e4: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4e83e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e83e8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4e83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4e83ec: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e83ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e83f0: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4e83f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4e83f4: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x4e83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x4e83f8: 0x7fad0000  sq          $t5, 0x0($sp)
    ctx->pc = 0x4e83f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 13));
    // 0x4e83fc: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4E83FCu;
    SET_GPR_U32(ctx, 31, 0x4E8404u);
    ctx->pc = 0x4E8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E83FCu;
    // 0x4e8400: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4E83FCu, 0x4E8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8404u;
label_4e8404:
    // 0x4e8404: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4e8404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4e8408: 0x26c40124  addiu       $a0, $s6, 0x124
    ctx->pc = 0x4e8408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x4e840c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e8410: 0x26c50128  addiu       $a1, $s6, 0x128
    ctx->pc = 0x4e8410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4e8414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e8414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8418: 0x26c7012c  addiu       $a3, $s6, 0x12C
    ctx->pc = 0x4e8418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4e841c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e8420: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e8420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e8424: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8428: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4e8428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4e842c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e842cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e8430: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e8430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8434: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4e8434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4e8438: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x4e8438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4e843c: 0x7bad0000  lq          $t5, 0x0($sp)
    ctx->pc = 0x4e843cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8440: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8444: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4e8444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e8448: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e8448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e844c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e8450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e8454: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8458: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e845c: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4e845cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8460: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e8460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e8464: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4e8464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e8468: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e8468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e846c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e846cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8470: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e8470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e8474: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8478: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e8478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e847c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4e847cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e8480: 0xa4c8232e  sh          $t0, 0x232E($a2)
    ctx->pc = 0x4e8480u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 8));
    // 0x4e8484: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4e8484u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e8488: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e8488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e848c: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E848Cu;
    SET_GPR_U32(ctx, 31, 0x4E8494u);
    ctx->pc = 0x4E8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E848Cu;
    // 0x4e8490: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E848Cu, 0x4E8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8494u;
label_4e8494:
    // 0x4e8494: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E8494u;
    SET_GPR_U32(ctx, 31, 0x4E849Cu);
    ctx->pc = 0x4E8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8494u;
    // 0x4e8498: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E8494u, 0x4E849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E849Cu;
label_4e849c:
    // 0x4e849c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E849Cu;
    SET_GPR_U32(ctx, 31, 0x4E84A4u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E849Cu, 0x4E84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E84A4u;
label_4e84a4:
    // 0x4e84a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4e84a8: 0xa6c201bc  sh          $v0, 0x1BC($s6)
    ctx->pc = 0x4e84a8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 444), (uint16_t)GPR_U32(ctx, 2));
label_4e84ac:
    // 0x4e84ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4e84acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e84b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4e84b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e84b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4e84b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e84b8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4e84b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e84bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4e84bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e84c0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4e84c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e84c4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4e84c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e84c8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4e84c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4e84cc: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4e84ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e84d0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4e84d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4e84d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E84D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84D4u;
        // 0x4e84d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E84D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E84DCu;
    // 0x4e84dc: 0x0  nop
    ctx->pc = 0x4e84dcu;
    // NOP
    ctx->pc = 0x4e84e0u;
}
